#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int front , rear;
    int size;

    public:
    Queue(int n){
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    bool IsEmpty(){
        return rear == -1;
    }
    bool IsFull(){
        return (rear+1)%size == front;
    }
    void push(int x){
        if(IsFull()){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        else if(IsEmpty()){
            front = rear = 0;
            arr[rear] = x;
        }
        else {
            rear = (rear+1)%size;
            arr[rear] = x;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else{
            if(rear == front)
            front = rear = -1;
            else
            front = (front+1)%size;
        }
    }

    int start(){
        if(IsEmpty())
        return -1;
        else 
        return arr[front];
    }

};
int main(){
    Queue q(5);
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(89);
    q.push(890);
    q.pop();
    q.pop();
    q.push(11);
    q.push(12);
    q.push(13);
    cout<<endl<<q.IsEmpty()<<endl;
    cout<<q.IsFull()<<endl;
    int x = q.start();
    if(!q.IsEmpty())
    cout<<x<<endl;
}