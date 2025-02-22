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
    int pos = 3;
    //delete at start pos = 1
    if(pos==1){
        if(head->next == NULL){//if only one node exist
            delete head;
            head = NULL;
        }
        else{//more than one node exist
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }
    }
    else{
        Node *curr = head;
        while(--pos){
            curr= curr->next;
        }
        //delete at end 
        if(curr->next == NULL){
            curr->prev->next = NULL;
            delete curr;
        }
        //delete from middle
        else{
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }

    //print
    Node *trav = head;
    while(trav!= NULL){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}