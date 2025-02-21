#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    gcd(b,a%b);
}
void dfs(int node, int dest, const vector<vector<int>>& graph, vector<bool>& visited, int& pathCount) {
    // If we've reached the destination node, increment path count
    if (node == dest) {
        pathCount++;
        return;
    }

    // Mark the current node as visited
    visited[node] = true;

    // Explore all adjacent nodes
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, dest, graph, visited, pathCount);
        }
    }

    // Unmark the current node as visited (backtracking)
    visited[node] = false;
}

int find(vector<int> arr,int n)
{
    vector<vector<int>> adj(n);
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            int x = gcd(arr[i],arr[j]);
            if(x != 1)
            adj[i].push_back(j);
        }
    }

    int ans = 0;
    int dest = n-1;
    vector<bool> path(n,0);
    dfs(0,dest,adj,path,ans);

    return ans;
}
int main() {
    int k;
    cin >> k;
        
    vector<int> arr(k);
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }
        
    cout<<find(arr, k)<<endl;
}