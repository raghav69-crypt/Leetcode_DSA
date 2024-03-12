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



---
// Definition of Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
Node* newNode(int data);

// Sort a linked list of 0s, 1s, and 2s by changing pointers.
Node* sortList(Node* head) {
    // Check if the list is empty or has only one node
    if (!head || !(head->next))
        return head;

    // Create three dummy nodes to point to the beginning of
    // three linked lists. These dummy nodes are created to
    // avoid many null checks.
    Node* zeroD = newNode(0); // Dummy node for 0s
    Node* oneD = newNode(0);  // Dummy node for 1s
    Node* twoD = newNode(0);  // Dummy node for 2s

    // Initialize current pointers for three lists and the whole list.
    Node* zero = zeroD, *one = oneD, *two = twoD;

    // Traverse the list
    Node* curr = head;
    while (curr) {
        // Based on the data in the current node, append it to the respective list
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        } else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        } else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }

    // Attach three lists
    zero->next = (oneD->next) ? (oneD->next) : (twoD->next);
    one->next = twoD->next;
    two->next = NULL;

    // Update head to point to the beginning of the sorted list
    head = zeroD->next;

    // Delete dummy nodes to free memory
    delete zeroD;
    delete oneD;
    delete twoD;

    return head;
}
