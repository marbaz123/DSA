#include <iostream>
#include <vector>
using namespace std;
// void subseq(int arr[], int index, int n,int sum)
// {
//     if (index == n)
//     {
//         cout<<sum<<" ";
//         return;
//     }
//     //include na karo
//     subseq(arr, index + 1, n, sum);
//     //include karo
//     subseq(arr, index + 1, n, sum+arr[index]);
// }
void subseq(int arr[], int index, int n,int sum,vector<int>&ans)
{
    if (index == n)
    {
        ans.push_back(sum);
        return;
    }
    //include na karo
    subseq(arr, index + 1, n, sum,ans);
    //include karo
    subseq(arr, index + 1, n, sum+arr[index],ans);
}
int main()
{
    int arr[] = {3,4,5};
    int n = 3;
    vector<int>ans;
    // subseq(arr, 0, n,0);
    // cout<<endl;
    subseq(arr, 0, n,0,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<< " ";
    }

}