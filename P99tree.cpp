#include <iostream>
#include <queue>
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

int main ()
{
    int x;
    cout<<"Enter the root element: ";
    cin>>x;
    queue<Node*> q;
    Node *root = new Node(x);
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int x1 , x2;
        cout<<"enter the left child of "<<temp->data<<": ";
        cin>>x1;  //left child
        if(x1!=-1)
        {
            temp->left = new Node(x1);
            q.push(temp->left);
        }
        cout<<"enter the right child of "<<temp->data<<": ";
        cin>>x2;  //right child
        if(x2!=-1)
        {
            temp->right = new Node(x2);
            q.push(temp->right);
        }
    }
}