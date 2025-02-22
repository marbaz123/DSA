#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;

    int n = q.size();

    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}