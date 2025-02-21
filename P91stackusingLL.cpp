#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node (int value){
        data = value;
        next = NULL;
    }
};

class Stack {
    Node *top;
    int size;

    public:
    Stack (){
        top = NULL;
        size = 0;
    }

    void push(int value){
        Node *temp = new Node (value);
        if(temp == NULL){
            cout<<"Stack Underflow "<<endl;
            return;
        }
        else{
            temp ->next = top ;
            top = temp;
            size++;
            cout<<"pushed "<<value<<endl;
        }
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack Underflow "<<endl;
            return;
        }
        else{
            Node *temp = top;
            cout<<"popped "<<temp->data<<endl;
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek (){
        if(top == NULL){
            cout<<"stack is Empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }
    bool IsEmpty(){
        return top == NULL;
    }
    int IsSize(){
        return size;
    }
};

int main (){
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.IsSize()<<endl;
    cout<<s.IsEmpty()<<endl;
}
