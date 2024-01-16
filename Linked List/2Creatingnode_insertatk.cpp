
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

void insertAtPosition(Node* &head, int val, int pos) {
  // If the position is 0 or negative, insert at the head
  if (pos <= 0) {
    insertAtHead(head, val);
    return;
  }

  // Create a new node with the given value
  Node* new_node = new Node(val);

  // Traverse the list until the position before the desired position is reached
  Node* temp = head;
  for (int i = 0; i < pos - 1 && temp != NULL; i++) {
    temp = temp->next;
  }

  // If the position is beyond the end of the list, insert at the tail
  if (temp == NULL) {
    insertAttail(head, val);
  } else {
    // Insert the new node at the specified position
    new_node->next = temp->next;
    temp->next = new_node;
  }
}
void updateAtPosition(Node* &head, int val, int pos) {
    // Declare a pointer to traverse the linked list, initially pointing to the head
    Node* temp = head;

    // Initialize a counter to keep track of the current position while traversing
    int curr_posn = 0;

    // Traverse the linked list until the desired position is reached
    while (curr_posn != pos) {
        temp = temp->next;  // Move the pointer to the next node
        curr_posn++;        // Increment the current position counter
    }
    // Update the data of the node at the desired position with the specified value
    temp->data = val;
}

void deleteAtHead(Node* &head) {
    // If the list is empty, do nothing
    if (head == NULL) { // Simply return
        return;
    }
      
  else{
    Node * temp = head; // head ko iterate krdia
    head = head->next; // temp first node pr hi tha
    delete temp; // temp free
  }
  }

void deleteAtTail(Node* &head) 
{
     Node * second_last = head; // Head ko second last tk leke aye
     while(second_last->next->next != NULL) // Means Null as last node
     {
     second_last = second_last->next; 
     }

  Node * temp = second_last->next; // pointing to last node and stored
  second_last->next = NULL; // second last node is termed null
  delete(temp); // delete last node that is stored is temp
}

// Function to display the elements of the linked list
void display(Node* head) {
  Node* temp = head;              // Create a temporary pointer and set it to the head of the list
  while (temp != NULL) {          // Iterate through the list until the end (NULL) is reached
    cout << temp->data << "-->";    // Print the data of the current node
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
  display(head);

  insertAtPosition(head,4,69); // 5 4 3 2 1 6 NULL
  display(head); 

  updateAtPosition(head,69,2); // 1 2 3 4 5 ---> updated 1 2 69 4 5
  display(head);  
  
  deleteAtHead(head);
  display(head);  

  deleteAtTail(head);
  display(head);             
}






































