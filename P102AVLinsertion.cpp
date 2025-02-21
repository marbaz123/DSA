#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    int height;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

int getheight(Node *root){
    if(!root)
    return 0;

    return root->height;
}

int getbalance(Node *root)
{
    return getheight(root->left) - getheight(root->right);
}

Node *leftRotation(Node *root)
{
    Node *child = root->right;
    Node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    root->height = 1 + max(getheight(root->left),getheight(root->right));
    child->height = 1 + max(getheight(child->left),getheight(child->right));

    return child;
}
Node *rightRotation(Node *root)
{
    Node *child = root->left;
    Node *childRight = child->right;

    child->right = root;
    root->left = childRight;

    root->height = 1 + max(getheight(root->left),getheight(root->right));
    child->height = 1 + max(getheight(child->left),getheight(child->right));

    return child;
}
Node *insert(Node *root,int val)
{
    // root doesnt exist
    if(!root)
    return new Node(val);

    //root exist
    if(val < root->data)  //left side
    root->left = insert(root->left,val);

    else if(val > root->data) //right side
    root->right = insert(root->right,val); 

    else   //not insert duplicate elements
    return root;

    //update height
    root->height = 1 + max(getheight(root->left),getheight(root->right));

    //check balance
    int balance = getbalance(root);

    //left left case
    if(balance > 1 && val < root->left->data)
    {
        return rightRotation(root);
    }
    //left right case
    else if(balance > 1 && val > root->left->data)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    //right right case
    else if( balance < -1 && val > root->right->data)
    {
        return leftRotation(root);
    }
    //right left case
    else if(balance < -1 && val < root->right->data)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    
    //already balanced
    else
    {
        return root;
    }
}

void inorder(Node *root)
{
    if(root == NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if(root == NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main ()
{
    //duplicate elements are not present
    Node *root = NULL;

    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,50);
    root = insert(root,70);
    root = insert(root,5);
    root = insert(root,100);
    root = insert(root,95);

    cout<<endl<<"inorder: ";
    inorder(root);
    cout<<endl<<"preorder: ";
    preorder(root);
}