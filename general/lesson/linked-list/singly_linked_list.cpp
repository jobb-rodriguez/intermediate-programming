// Singly Linked List
// Meaning in DSA - https://www.geeksforgeeks.org/singly-linked-list-definition-meaning-dsa/
// Linked List vs Array - https://www.geeksforgeeks.org/linked-list-vs-array/
// Standard Library for Singly Linked List (https://www.geeksforgeeks.org/list-cpp-stl/)
/* APPLICATIONS
Implementing stacks and queues using linked lists.
Using linked lists to handle collisions in hash tables.
Representing graphs using linked lists.
Allocating and deallocating memory dynamically.
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insertion
// Begin - pushFront
void pushFront(Node **head, int data) {
    // Create a new Node
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = *head; // point the new node to the first element of the current linked list

    *head = newNode; // point the linked list pointer to the new first element
}

// Position - insert
void insert(Node **head, int data, int position) {
    string errorMessage = "";
    try {
        int length = 0;
    
        Node *lastNode = *head;

        // Traverse the linked list to the target position
        while(lastNode->next != NULL) {
            if(length == position - 1) {
                // Create a new Node
                Node *newNode = new Node;
                newNode->data = data;
                newNode->next = lastNode->next; // X -> NEW -> Y

                lastNode->next = newNode; // X should point at NEW
                return;
            }

            lastNode = lastNode->next;
            length++;
        }
        if (length == position - 1 && lastNode->next == NULL) {
            // Create a new Node
            Node *newNode = new Node;
            newNode->data = data;
            newNode->next = NULL; // X -> NEW -> Y

            lastNode->next = newNode; // X should point at NEW
            return;
        }

        errorMessage = "The position index you entered is invalid.";
        throw(errorMessage);

    } catch (string message) {
        cout << message << "\n";
        cout << "======\n";
    }
}

// End - pushBack
void pushBack(Node **head, int data) {
    // Create a new Node
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    Node *lastNode = *head; // the value pointed to by head

    if (lastNode == NULL) { // empty linked list
        *head = newNode;
        return;
    }

    // Traverse until you reach the last node
    while(lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}

// Traversal (you can use this to get the length) -> can also use front() and back()
void displayData(Node *head) {
    Node *lastNode = head;

    if (lastNode == NULL) { // empty linked list
        cout << "The Linked List has no data.\n";
        return;
    }

    while(lastNode->next != NULL) {
        cout << lastNode->data << "\n";
        lastNode = lastNode->next;
        
        if(lastNode->next == NULL) {
            cout << lastNode->data << "\n";
        }
    }
    cout << "======\n";
}

// Deletion
// Begin - popFront
void popFront(Node **head) {
    string errorMessage = "";
    try {
        Node *lastNode = *head; // the value pointed to by head

        if (lastNode == NULL) { // empty linked list
            errorMessage = "The linked list is empty";
            throw(errorMessage);
            return;
        }

        Node *temp = *head; // Create a temporary node pointer for the first element
        *head = temp->next; // Set the second element as the new first element

        // Delete the dangling node
        delete temp;
    } catch (string message) {
        cout << message << "\n";
        cout << "======\n";
    }
}

// End - popBack
void popBack(Node **head) {
    string errorMessage = "";
    try {
        Node *lastNode = *head; // the value pointed to by head
        Node *prevNode = NULL;

        if (lastNode == NULL) { // empty linked list
            errorMessage = "The linked list is empty";
            throw(errorMessage);
            return;
        }

        // Traverse until you reach the last node
        while(lastNode->next != NULL) {
            prevNode = lastNode;
            lastNode = lastNode->next;
        }
        
        // Delete the last element
        delete lastNode;

        // Update the linked list's last element
        prevNode->next = NULL;
    } catch (string message) {
        cout << message << "\n";
        cout << "======\n";
    }
}

int main() {
    // Start with an empty linked list
    Node *head = NULL;
    
    // Delete first element
    popFront(&head);

    // Check
    displayData(head);

    // 14 -> 16 -> 18 -> 20
    pushBack(&head, 14);
    pushBack(&head, 16);
    pushBack(&head, 18);
    pushBack(&head, 20);
    insert(&head, 21, 4);
    
    // Check
    displayData(head);

    // Add 12
    pushFront(&head, 12);

    // Check
    displayData(head);

    // Insert 15 at index 1
    insert(&head, 15, 2);

    // Check
    displayData(head);

    // Insert an invalid index
    insert(&head, 100, 100);

    // Delete 12
    popFront(&head);

    // Check
    displayData(head);

    // Delete 21
    popBack(&head);

    // Check
    displayData(head);

    return 0;
}