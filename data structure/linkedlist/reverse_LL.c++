#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linklist
{
public:
    node *head = NULL;
    void insert(int data)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }
    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void reverse()
    {
        node *prev = NULL;
        node *curr = head;
        node *forward = NULL;

        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head = prev;
    }
};
int main()
{
    linklist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.insert(60);
    cout << "list = ";
    list.print();
    cout<<endl;
    list.reverse();
    cout << "reverse list = ";
    list.print();

    return 0;
}