#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class circular
{
public:
    node *head;
    circular()
    {
        head = NULL;
    }
    void inserter(int data)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head=newnode;
            newnode->next = head;
        }
        else
        {
            node *current = head;
            while (current->next != head)
            {
                current = current->next;
            }
            current->next = newnode;
            newnode->next = head;
            head = newnode;
        }
    }
    void print()
    {
        node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp=temp->next;
        } while (temp !=head);
    }
};
int main()
{
    circular list;
    list.inserter(10);
    list.inserter(30);
    list.inserter(60);
    list.inserter(90);
    list.print();
    return 0;
}