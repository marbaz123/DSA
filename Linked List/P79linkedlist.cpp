#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
node* createlinkedlist(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size);
    return temp;
}
int main ()
{
    node *head;
    head = NULL;
    int arr[] = {2,3,5,7,8};
    
    //insertion at start
    for(int i=0;i<5;i++)
    {
        if(head==NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *temp;
            temp = new node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    cout<<endl;
    //print
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    //insertion at end
    node *newhead = NULL;
    node *newtail = NULL;
    for(int i=0;i<5;i++)
    {
        if(newhead==NULL)
        {
            newhead = new node(arr[i]);
            newtail = newhead;
        }
        else
        {
            newtail->next = new node(arr[i]);
            newtail = newtail->next;
        }
    }

    cout<<endl;
    //print
    temp = newhead;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}