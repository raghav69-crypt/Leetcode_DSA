// Add a linkedlist before proceeding with same below.

bool hasCycle(ListNode *head) { // Function definition for checking if a linked list has a cycle

    ListNode* slow = head; // Initialize a pointer named 'slow' to the head of the linked list
    ListNode* fast = head; // Initialize a pointer named 'fast' to the head of the linked list
 
    while (fast && fast->next) { // Loop until 'fast' reaches the end of the linked list or the next node of 'fast' becomes null
        slow = slow->next; // Move 'slow' one step forward in the linked list
        fast = fast->next->next; // Move 'fast' two steps forward in the linked list
        if (slow == fast) // If 'slow' and 'fast' pointers meet at the same node, it indicates the presence of a cycle
            return true; // Return true indicating a cycle is detected
    }
    return false; // If the loop completes without detecting a cycle, return false indicating no cycle is detected
}
