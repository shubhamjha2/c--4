#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
   
};
class linkedlist
{
public:
    node *head;
    linkedlist()
    {
        head = NULL;
    }
    ~linkedlist()
    {
        node *currnode = head;
        node *nextnode;

        // Traverse the list and delete each node
        while (currnode != nullptr)
        {
            nextnode = currnode->next;
            delete currnode;
            currnode = nextnode;
        }
    }
    void deleatenode(int key)
    {
        node *currnode = head;
        node *prevnode = NULL;
        while (currnode->next != NULL && currnode->data != key)
        {
            prevnode = currnode;
            currnode = currnode->next;
        }
        if (currnode == NULL)
        {
            cout << "node not found ";
            return;
        }
        if (currnode == head)
        {
            head = currnode->next;
        }
        else
        {
            prevnode->next = currnode->next;
        }
        delete currnode;
    }
    void insertnode(int data)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }
    void print()
    {
        node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
};

int main()
{
    linkedlist obj;
    obj.insertnode(2);
    obj.insertnode(4);
    obj.insertnode(6);
    obj.insertnode(8);
    obj.print();
    cout << endl;
    obj.deleatenode(2);
    obj.print();

    return 0;
}