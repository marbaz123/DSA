#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
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
    
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        int prefix = 0;
        for(int j=0;j<=i;j++)
        {
            prefix += v[i];
            ans = max(ans,prefix);
        }
        

        
    }
    cout<<ans;
}