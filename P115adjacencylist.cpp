#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int vertices, edges;
    cout<<"enter the number of vertices ans edges: \n";
    cin>>vertices>>edges;

    vector<int> adjlist[vertices];
    int u,v;
    cout<<"\n enter the edges:\n";
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    for(int i = 0;i<vertices;i++)
    {
        cout<<i<<" -> ";
        for(int j = 0;j<adjlist[i].size();j++)
        cout<<adjlist[i][j]<<" ";
        cout<<endl;
    }
}