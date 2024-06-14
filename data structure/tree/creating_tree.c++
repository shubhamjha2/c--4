#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *creating_tree(node *root)
{
    cout << "enter the data" << endl;
    int val;
    cin >> val;
    root = new node(val);
    if (val == -1)
    {
        return NULL;
    }
    cout << "enter the left child of " << val << endl;
    root->left = creating_tree(root->left);
    cout << "enter the right child of " << val << endl;
    root->right = creating_tree(root->right);
    return root;
}
//pre-order triversal
void pre_order(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
//post-order triversal
void post_order(node* root){
    if(root==NULL){
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout<<root->val<<" ";
}
//in-order triversal
void in_order(node* root){
    if(root==NULL){
        return;
    }
    in_order(root->left);
    cout<<root->val<<" ";
    in_order(root->right);
}

// level order triversing
void level_order_triversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->val << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{

    // creating a tree
    node *root = NULL;
    root = creating_tree(root);
    // level oorder triversing
    cout<<"\n\nlevel order triversal of inputed tree is "<<endl;
    level_order_triversal(root);

    //pre order triversal
    cout<<"\n\n pre-order triversal of inputed tree is "<<endl;
    pre_order(root);
    //in order triversal
    cout<<"\n\n in-order triversal of inputed tree is "<<endl;
    in_order(root);
    //post order triversal
    cout<<"\n\n post-order triversal of inputed tree is "<<endl;
    post_order(root);
    
    return 0;
}