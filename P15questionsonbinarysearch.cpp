//find first and last occurance of the number in array 
#include <iostream>
using namespace std;
int main()
{
    int n,target;
    int nums[100];
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"enter the target element: ";
    cin>>target;
    int start = 0, end = n - 1, mid;
    int first = -1, last = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    cout<<"["<<first<<","<<last<<"]"<<endl;
    cout<<"number of "<<target<<" present in array: "<<last-first+1;
}