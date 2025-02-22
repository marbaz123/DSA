#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    priority_queue<int> q;  //max heap
priority_queue<int, vector<int>, greater<int> > p; //min heap

    q.push(2);   
    q.push(4);   
    q.push(3);   
    q.push(5);   
    q.push(1);

    p.push(5);
    p.push(2);
    p.push(6);
    p.push(7);

    cout<<q.top()<<endl;   
    cout<<q.size()<<endl;  

    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }  
}