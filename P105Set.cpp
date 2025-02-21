#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;

    bool operator < (const person &other) const {
        return age < other.age;  // to reverse the order of elements in the set change "<" to ">"
    }
};

int main ()
{
    //set<int> s;

    // //to store value in decreasing order
    // set<int ,greater<int>> s;

    // s.insert(10);   
    // s.insert(20);   
    // s.insert(30);
    // s.insert(40);

    // //for(auto it = s.begin();it!=s.end();it++)
    // // {
    // //     cout<<*it<<" ";
    // // }


    // if(s.find(30)!=s.end())
    // {
    //     cout<<endl<<"present"<<endl;
    // }
    // else
    // {
    //     cout<<"absent"<<endl;
    // }

    set<person> s;
    person p1,p2,p3;
    p1.name = "arbaz", p1.age = 18;
    p2.name = "Ali", p2.age = 30;
    p3.name = "Rohit", p3.age = 22;

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }

    multiset<int> m;

    m.insert(10);
    m.insert(60);
    m.insert(20);
    m.insert(30);
    m.insert(10);

    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
}