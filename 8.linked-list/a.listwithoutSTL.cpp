#include <iostream>

using namespace std;

// Define the structure for each node in the linked list
struct Node {
    int data;
    Node *next;
};

// Define the class for the linked list
class LinkedList {
  private:
    Node *head;

  public:
    // Constructor to initialize the head of the linked list
    LinkedList() { head = NULL; }

    // Function to add a new node to the linked list
    void addNode(int value) {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to print the linked list
    void printList() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function to test the linked list implementation
int main() {
    LinkedList myList;

    myList.addNode(5);
    myList.addNode(10);
    myList.addNode(15);

    myList.printList();

    return 0;
}
