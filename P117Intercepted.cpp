#include <iostream>
#include <vector>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
void printFactorPairs(int num,vector<pair<int,int>> &factor) {
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
            factor.push_back({i,num/i});
        }
    }
}

void find(vector<int> &arr,int n)
{
    unordered_set<int> s;
    for(int i=0;i<=n;i++)
    s.insert(arr[i]);

    int size = n-2;

    vector<pair<int,int>> factor;
    printFactorPairs(n-2,factor);

    for(int i=0;i<factor.size();i++)
    {
        int x = factor[i].first;
        int y = factor[i].second;
        if(s.count(x) && s.count(y))
        {
            cout<<x<<" "<<y<<endl;
            return;
        }
    }

}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k;
        cin >> k;
        
        vector<int> arr(k);
        for (int i = 0; i < k; i++) {
            cin >> arr[i];
        }
        
        find(arr, k);
    }
}