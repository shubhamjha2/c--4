#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    ~LinkedList()
    {
        Node *currNode = head;
        Node *nextNode;

        // Traverse the list and delete each node
        while (currNode != nullptr)
        {
            nextNode = currNode->next;
            delete currNode;
            currNode = nextNode;
        }
    }

    // Function to delete a node with given key
    void deleteNode(int key)
    {
        Node *currNode = head;
        Node *nextNode;

        // Traverse the list and delete each node
        while (currNode != nullptr)
        {
            nextNode = currNode->next;
            
            currNode = nextNode;
        }
      
       
        // If the node is not found, return
        if (currNode == nullptr)
        {
            return;
        }

        // If the node to be deleted is the head node
        if (currNode == head)
        {
            head = currNode->next;
        }
        else
        {
            nextNode->next = currNode->next;
        }

        // Remove the node
        delete currNode;
    }

    // Function to insert a node at the beginning of the list
    void insertNode(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    // Function to print the list
    void printList()
    {
        Node *currNode = head;

        while (currNode != nullptr)
        {
            cout << currNode->data << " ";
            currNode = currNode->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList myList;

    // Insert some nodes
    myList.insertNode(5);
    myList.insertNode(10);
    myList.insertNode(15);
    myList.insertNode(20);

    // Print the original list
    cout << "Original list: ";
    myList.printList();

    // Delete a node
    myList.deleteNode(10);

    // Print the updated list
    cout << "Updated list: ";
    myList.printList();

    return 0;
}
