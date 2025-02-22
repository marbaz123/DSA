#include <iostream>
#include <vector>
using namespace std;
	int perfactsum(int arr[], int index, int n,int sum)
    {
        if (index == n)
        {
            return sum==0;
        }
    
        return perfactsum(arr, index + 1, n,sum)+perfactsum(arr, index + 1, n,sum-arr[index]);
    }

int main()
{
    int arr[] = {5,2,3,6,10,8};
    int n = 6;
    cout<<perfactsum(arr, 0, n,10);

}