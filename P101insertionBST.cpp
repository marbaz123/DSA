#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *createBST(Node *root,int target)
{
    if(!root)
    return new Node(target);

    if(target>=root->data)
    root->right = createBST(root->right,target);
    else
    root->left = createBST(root->left, target);

    return root;
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
    int arr[] = {8,6,12,4,7,9,14,3,5};

    Node *root = NULL;
    for(int i = 0;i<9;i++)
    root = createBST(root,arr[i]);

    inorder(root);
}