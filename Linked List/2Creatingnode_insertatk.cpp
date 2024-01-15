








#include <iostream>
using namespace std;

// Define a structure for a linked list node
struct Node {
  int data;
  Node* next;

  // Constructor to initialize a node with a given value
  Node(int val) {
    data = val;
    next = NULL;
  }
};

// Function to insert a new node at the head of the linked list
void insertAtHead(Node* &head, int val) {
  Node* new_node = new Node(val); // Create a new node with the given value
  new_node->next = head;          // Set the next pointer of the new node to the current head
  head = new_node;                // Update the head to point to the new node
}

//INDIVIDUAL CALLING

void insertAttail(Node* &head, int val) {    
  // Create a new node with the given value
  Node* new_node = new Node(val);
  // Create a temporary pointer and set it to the head of the list
  Node* temp = head;
  // Traverse the list until the end (NULL) is reached
  while (temp->next != NULL) {
    temp = temp->next;
  }
  // Set the next pointer of the last node to the new node (It means temp ke next ko newnode se link)
  temp->next = new_node;
}
// Function to display the elements of the linked list
void display(Node* head) {
  Node* temp = head;              // Create a temporary pointer and set it to the head of the list
  while (temp != NULL) {          // Iterate through the list until the end (NULL) is reached
    cout << temp->data << " ";    // Print the data of the current node
    temp = temp->next;            // Move the temporary pointer to the next node
  }
  cout << "NULL" << endl;         // Print "NULL" to indicate the end of the list
}

// Main function
int main() {
  Node* head = NULL;              // Initialize the head pointer to NULL
  insertAtHead(head, 2);          // Insert 2 at the head of the linked list
  insertAtHead(head, 3);          // Insert 3 at the head of the linked list
  insertAtHead(head, 4);          // Insert 4 at the head of the linked list
  insertAtHead(head, 5);          // Insert 5 at the head of the linked list
  display(head);                  // Display the linked list
  // INDIVIDUAL CALLING
  insertAttail(head ,6);          // It will hit the last node at last
  display(head);                  // 5 4 3 2 1 6 NULL
}






























