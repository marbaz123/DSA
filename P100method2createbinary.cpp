#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};
Node * BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;
    Node *temp = new Node (x);
    cout<<"enter the left child of "<<x<<": ";
    temp->left = BinaryTree();
    cout<<"enter the right child of "<<x<<": ";
    temp->right = BinaryTree();

    return temp;
}
void preorder(Node *root)
{
    if(root == NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if(root == NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if(root == NULL)
    return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main ()
{
    cout<<"Enter the root node: ";
    Node *root = BinaryTree();
    cout<<endl<<"preorder: ";
    preorder(root);
    cout<<endl<<"ineorder: ";
    inorder(root);
    cout<<endl<<"posteorder: ";
    postorder(root);
}