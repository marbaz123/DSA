#include <iostream>
#include <vector>
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
    int arr[] = {2,2,3,3,4,4,6};
    Node *head = createDLL(arr,0,7,NULL);

    Node *curr = head->next, *back = head;
    while(curr){
        if(back->data == curr->data){
            if(curr->next == NULL){
                back->next = NULL;
                delete curr;
                curr = NULL; 
            }
            else{
                back->next = curr->next;
                curr->next->prev = back;
                delete curr;
                curr = back->next;
            }
        }
        else{
            back = back->next;
            curr = curr->next;
        }
    } 
    

    
    //print
    Node *trav = head;
    while(trav!= NULL){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}