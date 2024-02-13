// Function to segregate a linked list containing 0s, 1s, and 2s
Node* segregate(Node* head) {
    // Initialize counters for 0s, 1s, and 2s
    int zeroCnt = 0, oneCnt = 0, twoCnt = 0;
    
    // Pointer to traverse the linked list
    Node* curr = head;
    
    // Count the number of 0s, 1s, and 2s in the linked list
    while (curr) {
        if (curr->data == 0) zeroCnt++; // Increment zero count if current node's data is 0
        if (curr->data == 1) oneCnt++;  // Increment one count if current node's data is 1
        if (curr->data == 2) twoCnt++;  // Increment two count if current node's data is 2
        curr = curr->next; // Move to the next node
    }
    
    // Reset current pointer to the head of the list
    curr = head;
    
    // Overwrite the nodes with 0s, 1s, and 2s based on their counts
    while (zeroCnt) {
        curr->data = 0; // Set current node's data to 0
        zeroCnt--;      // Decrement zero count
        curr = curr->next; // Move to the next node
    }
    while (oneCnt) {
        curr->data = 1; // Set current node's data to 1
        oneCnt--;       // Decrement one count
        curr = curr->next; // Move to the next node
    }
    while (twoCnt) {
        curr->data = 2; // Set current node's data to 2
        twoCnt--;       // Decrement two count
        curr = curr->next; // Move to the next node
    }
    
    // Return the modified head of the linked list
    return head;
}
