#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int vertices, edges;
    cout<<"enter the number of vertices ans edges: \n";
    cin>>vertices>>edges;

    vector<vector<bool>> adjmat(vertices, vector<bool>(vertices,0));
    int u,v;
    cout<<"\n enter the edges:\n";
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }

    for(int i = 0;i<vertices;i++)
    {
        for(int j = 0;j<vertices;j++)
        cout<<adjmat[i][j]<<" ";
        cout<<endl;
    }
}