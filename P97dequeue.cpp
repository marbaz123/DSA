#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next,*prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Dequeue {
    Node *front , *rear;

    public:
    Dequeue(){
        front = rear = NULL;
    }
    bool IsEmpty(){
        return front == NULL;
    }
    void push_front(int x){
        if(IsEmpty()){
            front = new Node(x);
            rear = front;
            cout<<x<<" pushed from front "<<endl;
        }
        else{
            Node *temp = new Node(x);
            if(temp == NULL){  //condition for overflow 
                cout<<"Queue Overflow\n";
                return;
            }
            temp->next = front;
            temp->next->prev = temp;
            front = temp;
            cout<<x<<" pushed from front"<<endl;
        }
    }
    void push_back(int x){
        if(IsEmpty()){
            front = new Node(x);
            rear = front;
            cout<<x<<" pushed from back"<<endl;
        }
        else{
            rear->next = new Node(x);
            if(rear->next == NULL){  //condition for overflow 
                cout<<"Queue Overflow\n";
                return;
            }
            rear->next->prev = rear;
            rear = rear->next;
            cout<<x<<" pushed from back"<<endl;
        }
    }
    void pop_front(){
        if(IsEmpty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else if(front->next == NULL){   //single node present
            Node *temp = front;
            front = front->next;
            rear = front;
            cout<<temp->data<<" popped from front"<<endl;
            delete temp;

        }
        else{
            Node *temp = front;
            front = front->next;
            cout<<temp->data<<" popped from front"<<endl;
            delete temp;
        }
    }
    void pop_back(){
        if(IsEmpty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else if(front->next == NULL){  //single node present
            Node *temp = front;
            front = front->next;
            rear = front;
            cout<<temp->data<<" popped from back"<<endl;
            delete temp;

        }
        else{
            Node *temp = rear;
            rear = rear->prev;
            cout<<temp->data<<" popped from back"<<endl;
            delete temp;
            rear->next = NULL;
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

    int end(){
        if(IsEmpty()){
            cout<<"Queue is Full"<<endl;
            return -1;
        }
        else{
            return rear->data;
        }
    }
};

int main(){
    Dequeue q;
    q.push_back(1);
    q.push_back(2);
    q.push_front(3);
    q.push_front(4);
    q.push_back(5);
    q.push_front(6);
    q.pop_back();
    q.pop_back();
    q.pop_front();
    q.pop_front();
    cout<<endl<<q.IsEmpty()<<endl;
    cout<<q.start()<<endl;
    cout<<q.end()<<endl;
}