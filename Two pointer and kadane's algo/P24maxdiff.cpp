//maximum difference between two elements using suffix
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
    
    int maxi = INT_MIN,suffix=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        maxi = max(maxi,(suffix-v[i]));
        suffix = max(suffix,v[i]);
    } 
    cout<<maxi;
}