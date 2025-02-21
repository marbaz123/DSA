#include <iostream>
using namespace std;
int ways(int arr[],int m,int sum)
{
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    long long ans = 0;
    for(int i = 0;i<m;i++){
        ans+=ways(arr,m,sum-arr[i]);
    }
    return ans;
}
int main ()
{
    int arr[] = {1,5,6};
    int m = 3;
    cout<<ways(arr,m,7);
}