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
        [Tooltip("Sound when cycling between slots")]
        [SerializeField] private AudioClip cycleSound;
        [Tooltip("Sound when equipping an item")]
        [SerializeField] private AudioClip equipSound;
        [SerializeField] [Range(0f, 1f)] private float cycleVolume = 1f;
        [SerializeField] [Range(0f, 1f)] private float equipVolume = 1f;
        private AudioSource audioSource;

        private int selectedIndex = 0;
        private float lastCycleTime = -999f;
        private GameObject currentEquippedItem;

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

        private void OnEnable()
        {
            StartCoroutine(HighlightCurrentSlotNextFrame());
        }

        private void Update()
        {
            if (!inventoryManager.IsActive) return;

            // B button on right hand to cycle
            if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch))
            {
                if (Time.time - lastCycleTime > cycleCooldown)
                {
                    CycleSelection(1);
                    lastCycleTime = Time.time;
                }
            }

            // Right trigger to equip and close inventory
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

            // Play cycle sound
            if (cycleSound != null)
                audioSource.PlayOneShot(cycleSound, cycleVolume);

            Debug.Log("Selected slot: " + selectedIndex);
        }

        private void EquipAndClose()
        {
            if (selectedIndex >= itemPrefabs.Length || itemPrefabs[selectedIndex] == null)
            {
                Debug.LogWarning("No prefab assigned for slot " + selectedIndex);
                return;
            }

            // Destroy previous equipped item if any
            if (currentEquippedItem != null)
                Destroy(currentEquippedItem);

            // Spawn the item at the right hand position
            currentEquippedItem = Instantiate(
                itemPrefabs[selectedIndex],
                rightHandEquipPoint.position,
                rightHandEquipPoint.rotation
            );

            // Play equip sound
            if (equipSound != null)
                audioSource.PlayOneShot(equipSound, equipVolume);

            Debug.Log("Spawned: " + itemPrefabs[selectedIndex].name);

            // Close the inventory
            StartCoroutine(CloseInventoryNextFrame());
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