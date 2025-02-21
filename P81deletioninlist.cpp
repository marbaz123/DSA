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

//insertion at end
node* createlinkedlistend(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlistend(arr,index+1,size);
    return temp;
}

int main ()
{
    int arr[] = {2,3,4,5,6};
    node *head;
    head = createlinkedlistend(arr,0,5);


    //deletion of node from start
    if(head!=NULL){
        node *temp = head;
        head = head->next;
        delete temp;
    }

    //deletion from the last
    if(head!=NULL)
    {
        if(head->next==NULL){
            node *temp = head;
            head = NULL;
            delete temp;
            
        }
        node *prev = head;
        node *curr = head;
        while(curr->next!=NULL){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        delete curr;
        
    }
    //delete at particular position

    int pos = 2;
    if(head!=NULL)
    {
        // if(head->next==NULL){
        //     node *temp = head;
        //     head = NULL;
        //     delete temp;
            
        // }
        node *prev = NULL;
        node *curr = head;
        pos--;
        while(pos--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
        
    }

    //print
    cout<<"list after deletion: ";
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}