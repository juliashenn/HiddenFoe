using System.Collections;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;
using UnityEngine.XR.Interaction.Toolkit.Interactors;

namespace MikeNspired.XRIStarterKit
{
    public class InventorySlotItemHandler : MonoBehaviour
    {
        [Header("Visual Slot Displays")]
        [SerializeField] private GameObject slotDisplayWhenContainsItem;
        [SerializeField] private GameObject slotDisplayToAddItem;

        [Header("Transforms & Colliders")]
        [SerializeField] private Transform itemModelHolder;
        [SerializeField] private Transform backImagesThatRotate;
        [SerializeField] private BoxCollider inventorySize;

        [Header("Audio")]
        [SerializeField] private AudioSource grabAudio;
        [SerializeField] private AudioSource releaseAudio;

        public GameObject SlotDisplayWhenContainsItem => slotDisplayWhenContainsItem;
        public GameObject SlotDisplayToAddItem => slotDisplayToAddItem;

        public XRBaseInteractable CurrentSlotItem { get; private set; }

        private TransformStruct itemStartingTransform;
        private Transform boundCenterTransform, itemSlotMeshClone;
        private Vector3 goalSizeToFitInSlot;

        public float AnimationLengthItemToSlot = 0.15f;
        private Coroutine animateItemToSlotCoroutine;
        private XRInteractionManager interactionManager;
        private bool isBusy;

        private void OnEnable()
        {
            interactionManager = FindFirstObjectByType<XRInteractionManager>();
            isBusy = false;
        }

        // ─────────────────────────────
        // SETUP
        // ─────────────────────────────
        public void Setup(XRBaseInteractable prefab)
        {
            if (!prefab) return;

            if (!boundCenterTransform)
            {
                boundCenterTransform = new GameObject("Bound Center Transform").transform;
                boundCenterTransform.SetParent(itemModelHolder);
            }

            CurrentSlotItem = Instantiate(prefab);

            // Keep in world space
            CurrentSlotItem.transform.SetParent(null);
            CurrentSlotItem.transform.position = itemModelHolder.position;
            CurrentSlotItem.transform.rotation = Quaternion.identity;
            CurrentSlotItem.transform.localScale = Vector3.one; // 🔥 critical

            SetPhysicsStored(CurrentSlotItem);

            SetupNewMeshClone(CurrentSlotItem);

            CurrentSlotItem.gameObject.SetActive(false);
            SnapItemToSlot();
        }

        // ─────────────────────────────
        // DISPLAY
        // ─────────────────────────────
        public void SetSlotDisplayInstant()
        {
            if (CurrentSlotItem)
            {
                slotDisplayWhenContainsItem?.SetActive(true);
                slotDisplayToAddItem?.SetActive(false);
            }
            else
            {
                slotDisplayWhenContainsItem?.SetActive(false);
                slotDisplayToAddItem?.SetActive(true);
            }
        }

        private IEnumerator AnimateIcon()
        {
            if (CurrentSlotItem)
            {
                slotDisplayWhenContainsItem.SetActive(true);
                yield return null;
                slotDisplayToAddItem.SetActive(false);
            }
            else
            {
                slotDisplayToAddItem.SetActive(true);
                slotDisplayWhenContainsItem.SetActive(false);
            }

            isBusy = false;
        }

        public IEnumerator AnimateMeshModelOpenOrClose(bool toOne, float duration)
        {
            float timer = 0f;
            Vector3 start = toOne ? Vector3.zero : Vector3.one;
            Vector3 end = toOne ? Vector3.one : Vector3.zero;

            while (timer < duration)
            {
                float t = timer / duration;
                itemModelHolder.localScale = Vector3.Lerp(start, end, t);
                timer += Time.deltaTime;
                yield return null;
            }

            itemModelHolder.localScale = end;
        }

        // ─────────────────────────────
        // INTERACTION
        // ─────────────────────────────
        public void InteractWithSlot(XRBaseInteractor controller)
        {
            if (!controller || isBusy) return;

            isBusy = true;

            if (animateItemToSlotCoroutine != null)
                StopCoroutine(animateItemToSlotCoroutine);

            var itemInHand = GetItemInHand(controller);

            if (itemInHand)
                AddItemToSlot(controller);
            else if (CurrentSlotItem)
                RetrieveItemFromSlot(controller, true);
            else
                isBusy = false;

            StartCoroutine(AnimateIcon());
        }

        // ─────────────────────────────
        // STORE
        // ─────────────────────────────
        private void AddItemToSlot(XRBaseInteractor controller)
        {
            var item = GetItemInHand(controller);
            if (!item)
            {
                isBusy = false;
                return;
            }

            // Swap
            if (CurrentSlotItem != null)
            {
                if (itemSlotMeshClone)
                    Destroy(itemSlotMeshClone.gameObject);

                CurrentSlotItem.gameObject.SetActive(true);
                PrepareForGrab(CurrentSlotItem);
                StartCoroutine(GrabAfterStabilized(controller, CurrentSlotItem));
                CurrentSlotItem = null;
            }

            releaseAudio?.Play();

            ReleaseItemFromHand(controller, item);

            item.transform.SetParent(null);
            item.transform.localScale = Vector3.one; // 🔥 critical

            CurrentSlotItem = item;

            SetPhysicsStored(item);

            SetupNewMeshClone(item);

            item.gameObject.SetActive(false);

            animateItemToSlotCoroutine = StartCoroutine(AnimateItemToSlot());
        }

        // ─────────────────────────────
        // RETRIEVE
        // ─────────────────────────────
        private void RetrieveItemFromSlot(XRBaseInteractor controller, bool destroyItemMesh)
        {
            if (!CurrentSlotItem) return;

            if (itemSlotMeshClone && destroyItemMesh)
                Destroy(itemSlotMeshClone.gameObject);

            CurrentSlotItem.gameObject.SetActive(true);

            CurrentSlotItem.transform.SetParent(null);
            CurrentSlotItem.transform.localScale = Vector3.one; // 🔥 critical

            PrepareForGrab(CurrentSlotItem);

            StartCoroutine(GrabAfterStabilized(controller, CurrentSlotItem));

            grabAudio?.Play();

            CurrentSlotItem = null;
        }

        // ─────────────────────────────
        // XR HELPERS
        // ─────────────────────────────
        private static XRBaseInteractable GetItemInHand(XRBaseInteractor controller)
        {
            if (!controller.hasSelection) return null;
            if (controller.interactablesSelected.Count == 0) return null;
            return controller.interactablesSelected[0] as XRBaseInteractable;
        }

        private void ReleaseItemFromHand(XRBaseInteractor interactor, XRBaseInteractable interactable)
        {
            interactionManager?.SelectExit((IXRSelectInteractor)interactor, interactable);
        }

        private IEnumerator GrabAfterStabilized(XRBaseInteractor interactor, XRBaseInteractable interactable)
        {
            yield return null;
            yield return new WaitForFixedUpdate();

            interactionManager?.SelectEnter((IXRSelectInteractor)interactor, interactable);
        }

        private void PrepareForGrab(XRBaseInteractable item)
        {
            var rb = item.GetComponent<Rigidbody>();
            if (rb)
            {
                rb.isKinematic = false;
                rb.linearVelocity = Vector3.zero;
                rb.angularVelocity = Vector3.zero;
            }

            // 🔥 XR RESET (VERY IMPORTANT)
            var grab = item as XRGrabInteractable;
            if (grab)
            {
                grab.enabled = false;
                grab.enabled = true;
            }
        }

        private void SetPhysicsStored(XRBaseInteractable item)
        {
            var rb = item.GetComponent<Rigidbody>();
            if (!rb) return;

            rb.linearVelocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            rb.isKinematic = true;
        }

        // ─────────────────────────────
        // ANIMATION
        // ─────────────────────────────
        private IEnumerator AnimateItemToSlot()
        {
            float timer = 0f;

            while (timer < AnimationLengthItemToSlot)
            {
                float t = timer / AnimationLengthItemToSlot;

                boundCenterTransform.localPosition =
                    Vector3.Lerp(itemStartingTransform.position, Vector3.zero, t);

                boundCenterTransform.localRotation =
                    Quaternion.Lerp(itemStartingTransform.rotation, Quaternion.Euler(0, 90, 0), t);

                boundCenterTransform.localScale =
                    Vector3.Lerp(itemStartingTransform.scale, goalSizeToFitInSlot, t);

                timer += Time.deltaTime;
                yield return null;
            }

            isBusy = false;
        }

        private void SnapItemToSlot()
        {
            boundCenterTransform.localPosition = Vector3.zero;
            boundCenterTransform.localScale = goalSizeToFitInSlot;
            boundCenterTransform.localRotation = Quaternion.Euler(0, 90, 0);
        }

        // ─────────────────────────────
        // MESH CLONE
        // ─────────────────────────────
        private void SetupNewMeshClone(XRBaseInteractable newItem)
        {
            if (itemSlotMeshClone)
                Destroy(itemSlotMeshClone.gameObject);

            CreateBoundsCenter();

            itemSlotMeshClone = GameObjectCloner.DuplicateAndStrip(newItem.gameObject).transform;

            itemSlotMeshClone.SetParent(itemModelHolder);
            itemSlotMeshClone.SetPositionAndRotation(newItem.transform.position, newItem.transform.rotation);

            var bounds = GetBoundsOfAllMeshes(itemSlotMeshClone);

            boundCenterTransform.position = bounds.center;
            boundCenterTransform.rotation = newItem.transform.rotation;

            itemSlotMeshClone.SetParent(boundCenterTransform);

            inventorySize.enabled = true;

            Vector3 size = inventorySize.bounds.size;

            float scale = Mathf.Min(
                size.x / bounds.size.x,
                size.y / bounds.size.y,
                size.z / bounds.size.z,
                1f
            );

            boundCenterTransform.localScale = Vector3.one * scale;

            inventorySize.enabled = false;

            itemStartingTransform.SetTransformStruct(
                newItem.transform.position,
                newItem.transform.rotation,
                newItem.transform.lossyScale
            );

            goalSizeToFitInSlot = boundCenterTransform.localScale;
        }

        private void CreateBoundsCenter()
        {
            if (boundCenterTransform)
                Destroy(boundCenterTransform.gameObject);

            boundCenterTransform = new GameObject("Bound Center Transform").transform;
            boundCenterTransform.SetParent(itemModelHolder, false);
            boundCenterTransform.localScale = Vector3.one;
        }

        private static Bounds GetBoundsOfAllMeshes(Transform item)
        {
            Bounds bounds = new Bounds();
            var rends = item.GetComponentsInChildren<Renderer>();

            foreach (var rend in rends)
            {
                if (rend.GetComponent<ParticleSystem>()) continue;

                if (bounds.extents == Vector3.zero)
                    bounds = rend.bounds;
                else
                    bounds.Encapsulate(rend.bounds);
            }

            return bounds;
        }
    }
}