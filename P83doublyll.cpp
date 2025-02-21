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

int main() {

    Node *head = NULL;

    //insertion at start
    if(head == NULL)
        head = new Node(5);

    else{
        Node *temp = new Node(6);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    //print
    Node *trav = head;
    while(trav!= NULL){
        cout<<trav->data<<" ";
        trav = trav->next;
    }

}