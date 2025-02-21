#include <iostream>
#include <vector>
using namespace std;
	int perfactsum(int arr[], int index, int n,int sum)
    {
        if(sum==0)
        return 1;
        if (index == n||sum<0)
        return 0;
    
        return perfactsum(arr, index + 1, n,sum)+perfactsum(arr, index, n,sum-arr[index]);
    }

int main()
{
    int arr[] = {2,3,4};
    int n = 3;
    cout<<perfactsum(arr, 0, n,6);

}