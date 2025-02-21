#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Queue {
    Node *front , *rear;

    public:
    Queue(){
        front = rear = NULL;
    }
    bool IsEmpty(){
        return front == NULL;
    }
    void push(int x){
        if(IsEmpty()){
            front = new Node(x);
            rear = front;
            cout<<x<<" pushed"<<endl;
        }
        else{
            rear->next = new Node(x);
            if(rear->next == NULL){  //condition for overflow 
                cout<<"Queue Overflow\n";
                return;
            }
            rear = rear->next;
            cout<<x<<" pushed"<<endl;
        }
    }
    void pop(){
        if(IsEmpty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else{
            Node *temp = front;
            front = front->next;
            cout<<temp->data<<" popped"<<endl;
            delete temp;
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is Full"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();
    q.pop();
    cout<<endl<<q.IsEmpty()<<endl;
    cout<<q.start()<<endl;
}