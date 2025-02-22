#include <iostream>
#include <vector>
using namespace std;
bool valid(int i, int j,int n){
    return i>=0&&j>=0&&i<n&&j<n;
}

//method 1
// void totalpath(vector<vector<int>>&matrix,int i,int j,int n,vector<string>&ans,string path,vector<vector<bool>>&visited){
//     if(i == n-1&&j == n-1){
//         ans.push_back(path);
//         return;
//     }
//     visited[i][j]=1;
//     //Up
//     if(valid(i-1,j,n)&&matrix[i-1][j]&&!visited[i-1][j])
//     {
//         path.push_back('U');
//         totalpath(matrix,i-1,j,n,ans,path,visited);
//         path.pop_back();
//     }
//     //Down
//     if(valid(i+1,j,n)&&matrix[i+1][j]&&!visited[i+1][j])
//     {
//         path.push_back('D');
//         totalpath(matrix,i+1,j,n,ans,path,visited);
//         path.pop_back();
//     }
//     //left
//     if(valid(i,j-1,n)&&matrix[i][j-1]&&!visited[i][j-1])
//     {
//         path.push_back('L');
//         totalpath(matrix,i,j-1,n,ans,path,visited);
//         path.pop_back();
//     }
//     //right
//     if(valid(i,j+1,n)&&matrix[i][j+1]&&!visited[i][j+1])
//     {
//         path.push_back('R');
//         totalpath(matrix,i,j+1,n,ans,path,visited);
//         path.pop_back();
//     }
//     visited[i][j] = 0;
// }

//method 2
void totalpath(vector<vector<int>>&matrix,int i,int j,int n,vector<string>&ans,string &path,vector<vector<bool>>&visited){
    if(i == n-1&&j == n-1){
        ans.push_back(path);
        return;
    }
    visited[i][j]=1;
    int row[] = {-1,1,0,0};
    int col[] = {0,0,-1,1};
    string dir = "UDLR";
    
    for(int k= 0 ;k<4;k++)
    {
        if(valid(i+row[k],j+col[k],n)&&matrix[i+row[k]][j+col[k]]&&!visited[i+row[k]][j+col[k]])
        {
            path.push_back(dir[k]);
            totalpath(matrix,i+row[k],j+col[k],n,ans,path,visited);
            path.pop_back();
        }
    }
    
    visited[i][j] = 0;
}

int main ()
{
    vector<vector<int>>matrix = {{1,0,0,0},{1,1,0,1},{1,1,1,1},{1,1,1,1}};
    int n = 4;
    vector<vector<bool>> visited(n,(vector<bool>(n,0)));
    vector<string>ans;
    string path;
    
    totalpath(matrix,0,0,n,ans,path,visited);
    for(int i = 0 ;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    
}