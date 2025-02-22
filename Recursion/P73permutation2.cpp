#include <iostream>
#include <vector>
using namespace std;
void permut(vector<int>&nums,vector<vector<int>> &ans,int index)
{
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    vector<bool>use(21,0);
    for(int i = index;i < nums.size();i++)
    {
        if(use[nums[i]+10]==0)
        {
            swap(nums[i],nums[index]);
            permut(nums,ans,index+1);
            swap(nums[i],nums[index]);
            use[nums[i]+10] = 1;
        }
        
    }
}
int main ()
{
    vector<int>nums = {2,1,1,2};
    vector<vector<int>>ans;
    permut(nums,ans,0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        cout << ans[i][j] << " ";
        cout << endl;
    }
}