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

//insertion at begining
node* createlinkedliststart(int arr[],int index)
{
    if(index<0)
    return NULL;

    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedliststart(arr,index-1);
    return temp;
}
//insertion at position
void insertatpos(int value, int pos,node* head){  
    node* temp = head;
    pos--;
    while(pos--){
        temp = temp->next;
    }
    node* temp2;
    temp2 = new node(value);
    temp2->next = temp->next;
    temp->next = temp2;

}

int main ()
{
    int arr[] = {2,3,4,5,6};
    node *head1;
    head1 = createlinkedlistend(arr,0,5);

    //print
    cout<<"insertion at end: ";
    insertatpos(10,2,head1);
    node *temp = head1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    node *head2;
    head2 = createlinkedliststart(arr,4);

    //print
    cout<<endl<<"insertion at start: ";
    temp = head2;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}