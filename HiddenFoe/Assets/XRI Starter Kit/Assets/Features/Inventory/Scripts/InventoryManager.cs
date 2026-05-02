using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace MikeNspired.XRIStarterKit
{
    public class InventoryManager : MonoBehaviour
    {
        public static event Action<InventorySlot> OnLeftSlotHoverBegan, OnLeftSlotHoverEnded,
                                                   OnRightSlotHoverBegan, OnRightSlotHoverEnded;

        [Header("Input")]
        [SerializeField] private InputActionReference openMenuInputLeftHand;
        [SerializeField] private InputActionReference openMenuInputRightHand;

        [Header("Controllers")]
        [Tooltip("Drag LeftControllerInHandAnchor here")]
        public Transform leftController;
        [Tooltip("Drag RightControllerInHandAnchor here")]
        public Transform rightController;

        [Header("Audio")]
        [SerializeField] private AudioSource enableAudio, disableAudio;

        [Header("Behavior Settings")]
        [SerializeField] private bool lookAtController;
        [SerializeField] private float queryInterval = 0.1f;
        [SerializeField] private float interactionRadius = 0.5f;

        [Header("Radial Wheel Settings")]
        [Tooltip("Radius of the circle the slots are arranged in (meters)")]
        [SerializeField] private float radialRadius = 0.15f;
        [Tooltip("Tilt the wheel to face the player better")]
        [SerializeField] private float wheelTiltAngle = 30f;

        [SerializeField] private InventorySlot[] inventorySlots;

        private bool isActive;
        private float nextQueryTime;

        private InventorySlot activeLeftSlot;
        private InventorySlot activeRightSlot;

        public InventorySlot ActiveLeftSlot => activeLeftSlot;
        public InventorySlot ActiveRightSlot => activeRightSlot;
        public bool IsActive => isActive;

        private void Awake()
        {
            OnValidate();

            openMenuInputLeftHand.GetInputAction().performed += _ => ToggleInventoryAtController(false);

            if (openMenuInputRightHand != null && openMenuInputRightHand.action != null)
                openMenuInputRightHand.GetInputAction().performed += _ => ToggleInventoryAtController(true);

            foreach (var slot in inventorySlots)
                slot.gameObject.SetActive(false);
        }

        private void OnValidate()
        {
            if (inventorySlots?.Length == 0)
                inventorySlots = GetComponentsInChildren<InventorySlot>();
        }

        private void OnEnable()
        {
            openMenuInputLeftHand.EnableAction();
            openMenuInputRightHand?.GetInputAction()?.Enable();
        }

        private void OnDisable()
        {
            openMenuInputLeftHand.DisableAction();
            openMenuInputRightHand?.GetInputAction()?.Disable();
        }

        private void Update()
        {
            // Proximity detection removed — inventory is button-only
        }

        private void ToggleInventoryAtController(bool isRightHand)
        {
            Transform hand = isRightHand ? rightController : leftController;
            TurnOnInventory(hand);
        }

        private void TurnOnInventory(Transform hand)
        {
            isActive = !isActive;
            ToggleInventoryItems(isActive, hand);
            PlayAudio(isActive);

            if (!isActive)
            {
                ClearActiveSlot(ref activeLeftSlot, true);
                ClearActiveSlot(ref activeRightSlot, false);
            }
            else
            {
                nextQueryTime = Time.time;
            }
        }

        private void ClearActiveSlot(ref InventorySlot slot, bool isLeft)
        {
            if (slot == null) return;
            slot.EndControllerHover();
            if (isLeft) OnLeftSlotHoverEnded?.Invoke(slot);
            else OnRightSlotHoverEnded?.Invoke(slot);
            slot = null;
        }

        private void PlayAudio(bool state)
        {
            if (state) enableAudio?.Play();
            else disableAudio?.Play();
        }

        private void ToggleInventoryItems(bool state, Transform hand)
        {
            foreach (var slot in inventorySlots)
            {
                if (!state)
                    slot.DisableSlot();
                else
                {
                    slot.gameObject.SetActive(true);
                    slot.EnableSlot();
                }
            }

            if (state)
                ArrangeSlotsInRadialWheel(hand);
        }

        private void ArrangeSlotsInRadialWheel(Transform hand)
        {
            transform.position = hand.position;
            transform.rotation = Quaternion.identity;

            if (Camera.main != null)
            {
                Vector3 toPlayer = (Camera.main.transform.position - hand.position).normalized;
                transform.rotation = Quaternion.LookRotation(toPlayer) *
                                     Quaternion.Euler(wheelTiltAngle, 0, 0);
            }

            int slotCount = inventorySlots.Length;
            for (int i = 0; i < slotCount; i++)
            {
                float angle = (360f / slotCount) * i - 90f;
                float rad = angle * Mathf.Deg2Rad;

                Vector3 localOffset = new Vector3(
                    Mathf.Cos(rad) * radialRadius,
                    Mathf.Sin(rad) * radialRadius,
                    0f
                );

                inventorySlots[i].transform.position = transform.position +
                                                        transform.TransformDirection(localOffset);
                inventorySlots[i].transform.rotation = transform.rotation;
            }
        }

        private void CheckHandProximity(Transform controller,
                                         ref InventorySlot activeSlot, bool isLeft)
        {
            if (controller == null) return;

            var handPosition = controller.position;
            float closestDistance = float.MaxValue;
            InventorySlot closestSlot = null;

            foreach (var slot in inventorySlots)
            {
                if (!slot.gameObject.activeInHierarchy) continue;

                float distance = Vector3.Distance(handPosition, slot.transform.position);
                if (distance < interactionRadius && distance < closestDistance)
                {
                    closestDistance = distance;
                    closestSlot = slot;
                }
            }

            if (closestSlot != activeSlot)
            {
                if (activeSlot != null)
                {
                    activeSlot.EndControllerHover();
                    if (isLeft) OnLeftSlotHoverEnded?.Invoke(activeSlot);
                    else OnRightSlotHoverEnded?.Invoke(activeSlot);
                }

                activeSlot = closestSlot;

                if (activeSlot != null)
                {
                    activeSlot.BeginControllerHover();
                    if (isLeft) OnLeftSlotHoverBegan?.Invoke(activeSlot);
                    else OnRightSlotHoverBegan?.Invoke(activeSlot);
                }
            }
            else
            {
                if (activeSlot != null && !activeSlot.gameObject.activeInHierarchy)
                {
                    activeSlot.EndControllerHover();
                    if (isLeft) OnLeftSlotHoverEnded?.Invoke(activeSlot);
                    else OnRightSlotHoverEnded?.Invoke(activeSlot);
                    activeSlot = null;
                }
            }
        }

        public InventorySlot[] GetSlots() => inventorySlots;

        public void CloseInventory()
        {
            if (!isActive) return;
            TurnOnInventory(leftController);
        }

        private void OnDrawGizmosSelected()
        {
            foreach (var slot in inventorySlots)
            {
                if (slot == null) continue;
                Gizmos.color = Color.cyan;
                Gizmos.DrawWireSphere(slot.transform.position, interactionRadius);
            }
        }
    }
}