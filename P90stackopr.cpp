#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

    public:
    bool flag; //to remove the problem of the negative numbers
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    void push(int value){
        if(top == size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = value;
            cout<<"pushed  "<<value<<endl;
            flag = 0;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else{
            top--;
            cout<<"popped  "<<arr[top+1]<<endl;
            if(top == -1)
            flag = 1;
        }
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        else
        return arr[top];
    }
    bool isEmpty(){
        return (top == -1);
    }

    int isSize(){
        return ++top;
    }
    bool isFull(){
        return (top == size);
    }
};

int main(){

    Stack s(5);

    s.push(6);
    s.push(67);
    s.pop();
    s.pop();
    //s.push(-1);
    cout<<s.isEmpty()<<endl;
    int value = s.peek();
    if(s.flag == 0)  //we can use size in place of flag 
    cout<<value<<endl;
    cout<<s.isFull()<<endl;
    cout<<s.isSize()<<endl;

}