#include <iostream>
#include <vector>
using namespace std;
// void permut(int arr[],vector<vector<int>> &ans,vector<int> &temp,vector<int> &visited)
// {
//     if(visited.size()==temp.size()){
//         ans.push_back(temp);
//         return;
//     }
//     for(int i = 0;i < visited.size();i++)
//     {
//         if(visited[i]==0){
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             permut(arr,ans,temp,visited);
//             visited[i]=0;
//             temp.pop_back();
//         }
//     }
// }
// int main ()
// {
//     int arr[] = {1,2,3};
//     int n = 3;
//     vector<vector<int>>ans;
//     vector<int>temp;
//     vector<int>visited(n,0);

//     permut(arr,ans,temp,visited);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         cout << ans[i][j] << " ";
//         cout << endl;
//     }
// }


//without using extra space like temp,visited
void permut(vector<int>&nums,vector<vector<int>> &ans,int index)
{
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = index;i < nums.size();i++)
    {
        swap(nums[i],nums[index]);
        permut(nums,ans,index+1);
        swap(nums[i],nums[index]);
    }
}
int main ()
{
    vector<int>nums = {1,2,3};
    vector<vector<int>>ans;
    permut(nums,ans,0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        cout << ans[i][j] << " ";
        cout << endl;
    }
}