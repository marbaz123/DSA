#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    unordered_set<int> s;
    unordered_multiset<int> m;  //duplicates can present

    s.insert(10);
    s.insert(60);
    s.insert(40);
    s.insert(20);
    s.insert(10);

    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    m.insert(20);
    m.insert(60);
    m.insert(70);
    m.insert(90);
    m.insert(20);
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
}