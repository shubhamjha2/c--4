#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
};
class doubley_LL
{
public:
    node *head;
    node *tail;
    doubley_LL()
    {
        head = NULL;
        tail = NULL;
    }
    void insert(int dat)
    {
        node *temp = new node;
        temp->data = dat;
        temp->prev = NULL;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
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
};
int main()
{
    doubley_LL obj;

    obj.insert(20); 
    obj.insert(30); 
    obj.insert(40); 
    obj.insert(50); 
    obj.print();
    return 0;
}