#include <iostream>
#include <deque>
using namespace std;

int main ()
{
    deque<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_front(3);
    q.push_front(4);
    q.pop_back();
    q.pop_front();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}