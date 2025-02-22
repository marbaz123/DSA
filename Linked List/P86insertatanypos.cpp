#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *prev,*next;

    Node(int value){
        data = value;
        prev = next = NULL;
    }
};

Node *createDLL(int arr[],int index,int size,Node *back){
    if(index==size){
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr,index+1,size,temp);
    return temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    Node *head = createDLL(arr,0,5,NULL);

    int pos = 5;

    //insert at any position
    
    //if pos = 0
    if(pos == 0){
        //list doesnt exist
        if(head == NULL)
            head = new Node(8);
        //list exist
        else{
            Node *temp = new Node(8);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else{
        Node *curr = head;
        while(--pos){
            curr =  curr->next;
        }

        if(curr->next == NULL){ //at last
            Node *temp = new Node(8);
            curr->next = temp;
            temp->prev = curr;
        }
        else{ // at middle
            Node *temp = new Node(8);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }
    //print
    Node *trav = head;
    while(trav!= NULL){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}