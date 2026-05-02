using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit.Interactables;
using Oculus.Interaction;

namespace MikeNspired.XRIStarterKit
{
    public class InventoryStartingItems : MonoBehaviour
    {
        [System.Serializable]
        public class SlotStartingItem
        {
            public InventorySlot slot;
            public GameObject itemPrefab; // drag the CUBE prefab here, not the gun
        }

        [Header("Starting Items")]
        public SlotStartingItem[] startingItems;

        private void Start()
        {
            Debug.Log("InventoryStartingItems Start — count: " + startingItems.Length);

            foreach (var entry in startingItems)
            {
                if (entry.slot == null)
                {
                    Debug.LogWarning("Slot is null!");
                    continue;
                }
                if (entry.itemPrefab == null)
                {
                    Debug.LogWarning("Item prefab is null!");
                    continue;
                }

                Debug.Log("Setting up: " + entry.itemPrefab.name);

                // Try XRBaseInteractable first (XRI system)
                XRBaseInteractable xriInteractable = 
                    entry.itemPrefab.GetComponentInChildren<XRBaseInteractable>(true);

                if (xriInteractable != null)
                {
                    SetupInSlot(entry.slot, xriInteractable);
                    continue;
                }

                // Fall back to instantiating and searching
                GameObject spawned = Instantiate(entry.itemPrefab);
                spawned.transform.SetParent(entry.slot.transform);
                spawned.transform.localPosition = Vector3.zero;
                spawned.transform.localEulerAngles = Vector3.zero;

                XRBaseInteractable spawnedInteractable = 
                    spawned.GetComponentInChildren<XRBaseInteractable>(true);

                if (spawnedInteractable != null)
                {
                    SetupInSlot(entry.slot, spawnedInteractable);
                    Debug.Log("SUCCESS via XRBaseInteractable: " + entry.itemPrefab.name);
                }
                else
                {
                    // List all components found to help diagnose
                    Debug.LogWarning("No XRBaseInteractable found on: " + entry.itemPrefab.name);
                    foreach (var comp in spawned.GetComponentsInChildren<Component>(true))
                        Debug.Log("  Component: " + comp.GetType().Name);
                    Destroy(spawned);
                }
            }
        }

        private void SetupInSlot(InventorySlot slot, XRBaseInteractable interactable)
        {
            var handler = slot.GetComponent<InventorySlotItemHandler>();
            if (handler != null)
            {
                handler.Setup(interactable);
                Debug.Log("SUCCESS: " + interactable.name + " in slot " + slot.name);
            }
            else
            {
                Debug.LogWarning("No InventorySlotItemHandler on slot: " + slot.name);
            }
        }
    }
}