#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int hah)
    {
        this->data = hah;
        this->next = NULL; // hmne yaha pai head kai next mai null dala jise hame pta chle ki yaha stop hona hai
    }
};
void insertathead(node *&head, int dta)
{
    node *temp = new node(dta); // hmne temp name ka node banaya and uska data enter krwaya
    temp->next = head;          // hmne temp kai next ko purane wale head ko point krwaya
    head = temp;                // head update krwa diya (naya head temp ko bana diya)
}
void insertattail(node *&tail, int gta)
{
    node *temp = new node(gta); // hmne temp name ka node banaya and uska data enter krwaya
    tail->next = temp;          // hmne temp kai next ko purane wale head ko point krwaya
    tail = temp;                // head update krwa diya (naya head temp ko bana diya)
}
void insertionatmid(node *&tail, node *&head, int position, int value)
{
    node *temp = head; // define head
    if (position == 1)
    {
        insertathead(head, value);
        return;
    }

    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next; // go to the element where insrt the element
        count++;
    }

    if (temp->next == NULL)
    {
        insertattail(tail, value);
        return;
    }
    node *nodetoinsert = new node(value); // created new node
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void print(node *&head)
{
    node *temp = head; // temp node banya jo head ko point kr rha hai
    while (head != NULL)
    {
        cout << "data " << temp->data << endl; // jb tk head nul naho print krwaya
        temp = temp->next;                     // new temp is current temp's next
    }
}

int main()
{
    node *node1 = new node(1990);
    cout << node1->data << endl;
    cout << node1->next << endl;

    node *head = node1; // head initilization
    // insertathead(head, 1991);
    // insertathead(head, 1992);
    // insertathead(head, 1993);                   // insertion at head
    // insertathead(head, 1994);

    node *tail = node1; // tail initilization
    insertattail(tail, 1991);
    insertattail(tail, 1992);
    insertattail(tail, 1993); // insertion at tail
    insertattail(tail, 1994);

    insertionatmid(tail, head, 6, 3445);
    cout << "after  insertion : " << endl;
    print(head);
    return 0;
}