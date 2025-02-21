#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector <int>& v){
    cout<<"enter the elements of the array: ";
    for(int i=0;i<v.size();i++)
    cin>>v[i];
    cout<<endl;
}
void print(vector <int> v){
    cout<<"required array: ";
    for(auto i :v)
    cout<<i<<" ";
    cout<<endl;

}
int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int> v(n);
    input(v);
    
    int maxi = INT_MIN;
    int prefix = 0;
    for(int i=0;i<n;i++){
        prefix += v[i];
        maxi = max(maxi,prefix);
        if(prefix<0)
        prefix = 0;
    }
    cout<<maxi;
}