#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    map <int, int> m;

    m.insert(make_pair(50,500));   
    m.insert(make_pair(20,400));   
    m.insert(make_pair(30,700));   
    m.insert(make_pair(20,100)); //keys csn not be duplicate  
    m.insert(make_pair(10,300));   


    for(auto it = m.begin();it != m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<" "<<endl;
    }
    
    cout<<m[20]<<" "<<endl;
    m[20] = 1; // update value
    m[5] = 1000;  //insert new pair
    cout<<m[20]<<" "<<endl;
    cout<<m[5]<<" "<<endl;

    if(m.count(3))
    cout<<m[3]<<endl;
}