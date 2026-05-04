using UnityEngine;
using System.Collections;

namespace MikeNspired.XRIStarterKit
{
    public class HotswapCycler : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private InventoryManager inventoryManager;

        [Header("Cycling Settings")]
        [SerializeField] private float cycleCooldown = 0.3f;

        [Header("Equip Settings")]
        [Tooltip("Drag RightControllerInHandAnchor here")]
        [SerializeField] private Transform rightHandEquipPoint;

        [Header("Item Prefabs")]
        [Tooltip("Assign prefabs in the same order as your inventory slots")]
        public GameObject[] itemPrefabs;

        [Header("Sound Settings")]
        [SerializeField] private AudioClip cycleSound;
        [SerializeField] private AudioClip equipSound;
        [SerializeField] [Range(0f, 1f)] private float cycleVolume = 1f;
        [SerializeField] [Range(0f, 1f)] private float equipVolume = 1f;
        private AudioSource audioSource;

        // Pre-spawned instances of each item stored off-screen
        private GameObject[] spawnedItems;
        private static readonly Vector3 hiddenPosition = new Vector3(0, -1000, 0);

        private int selectedIndex = 0;
        private float lastCycleTime = -999f;

        private void Awake()
        {
            if (inventoryManager == null)
                inventoryManager = GetComponent<InventoryManager>();

            audioSource = GetComponent<AudioSource>();
            if (audioSource == null)
                audioSource = gameObject.AddComponent<AudioSource>();

            audioSource.playOnAwake = false;
            audioSource.spatialBlend = 0f;
        }

        private void Start()
        {
            // Pre-spawn all items hidden off screen
            spawnedItems = new GameObject[itemPrefabs.Length];
            for (int i = 0; i < itemPrefabs.Length; i++)
            {
                if (itemPrefabs[i] == null) continue;
                spawnedItems[i] = Instantiate(itemPrefabs[i], hiddenPosition, Quaternion.identity);
                HideItem(spawnedItems[i]);
            }
        }

        private void OnEnable()
        {
            StartCoroutine(HighlightCurrentSlotNextFrame());
        }

        private void Update()
        {
            if (!inventoryManager.IsActive) return;

            if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch))
            {
                if (Time.time - lastCycleTime > cycleCooldown)
                {
                    CycleSelection(1);
                    lastCycleTime = Time.time;
                }
            }

            if (OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger, OVRInput.Controller.RTouch))
                EquipAndClose();
        }

        private void CycleSelection(int direction)
        {
            InventorySlot[] slots = inventoryManager.GetSlots();
            if (slots == null || slots.Length == 0) return;

            slots[selectedIndex]?.EndControllerHover();
            selectedIndex = (selectedIndex + direction + slots.Length) % slots.Length;
            slots[selectedIndex]?.BeginControllerHover();

            if (cycleSound != null)
                audioSource.PlayOneShot(cycleSound, cycleVolume);

            Debug.Log("Selected slot: " + selectedIndex);
        }

        private void EquipAndClose()
        {
            if (selectedIndex >= spawnedItems.Length || spawnedItems[selectedIndex] == null)
            {
                Debug.LogWarning("No item for slot " + selectedIndex);
                return;
            }

            // Hide all items first
            foreach (var item in spawnedItems)
                if (item != null) HideItem(item);

            // Show selected item in front of player
            GameObject selected = spawnedItems[selectedIndex];
            ShowItem(selected);

            if (equipSound != null)
                audioSource.PlayOneShot(equipSound, equipVolume);

            StartCoroutine(CloseInventoryNextFrame());
        }

        private void HideItem(GameObject item)
        {
            item.transform.position = hiddenPosition;

            // Freeze rigidbodies while hidden
            foreach (Rigidbody rb in item.GetComponentsInChildren<Rigidbody>())
            {
                rb.linearVelocity = Vector3.zero;
                rb.angularVelocity = Vector3.zero;
                rb.isKinematic = true;
            }
        }

        private void ShowItem(GameObject item)
        {
            // Place in front of player at waist height
            Vector3 spawnPos = Camera.main.transform.position
                             + Camera.main.transform.forward * 0.6f
                             - Vector3.up * 0.3f;

            item.transform.position = spawnPos;
            item.transform.rotation = Quaternion.identity;

            // Unfreeze so Meta XR can grab it
            foreach (Rigidbody rb in item.GetComponentsInChildren<Rigidbody>())
                rb.isKinematic = false;
        }

        private IEnumerator CloseInventoryNextFrame()
        {
            yield return null;
            inventoryManager.CloseInventory();
        }

        private IEnumerator HighlightCurrentSlotNextFrame()
        {
            yield return null;
            InventorySlot[] slots = inventoryManager?.GetSlots();
            if (slots != null && slots.Length > 0)
                slots[selectedIndex]?.BeginControllerHover();
        }

        public int GetSelectedIndex() => selectedIndex;
    }
}