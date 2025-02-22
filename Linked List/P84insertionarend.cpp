#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};

int main(){
    int arr[] = {1,2,3,4,5};
    Node *head = NULL;
    Node *tail = NULL;
    //insertion at end 
    for(int i = 0; i < 5; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }

        else{
            Node *temp = new Node(arr[i]);

            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    //print
    Node *trav = head;
    while(trav!= NULL){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}