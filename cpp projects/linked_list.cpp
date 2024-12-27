#include <iostream>
using namespace std;

class LinkedList {
private:
//Struct a node with data and next pointer
    struct Node {
        int data;
        Node* next;
    };
    Node* head;

public:

    LinkedList() : head(NULL) {} //Constructor

    void insertNode(int n) 
    {
        Node* newNode = new Node();
        newNode->data = n;
        newNode->next = NULL;

        if (head == NULL) 
        {
            head = newNode;
        } 
        else 
        {
            Node* temp = head;
            while (temp->next != NULL) 
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteNode(int n) 
    {
        if (head == NULL) return;

        if (head->data == n) 
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != n)
        {
            temp = temp->next;
        }

        if (temp->next == NULL) 
        {
            cout << "Node with value " << n << " not found." << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void displayList() 
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~LinkedList() {
        Node* temp = head;
        while (temp != NULL) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    LinkedList list;

    // Insert 5 integers into the linked list
    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);
    list.insertNode(50);

    cout << "Original list: ";
    list.displayList();

    // Delete a specific node
    list.deleteNode(30);

    cout << "Updated list after deleting node with value 30: ";
    list.displayList();

    return 0;
}