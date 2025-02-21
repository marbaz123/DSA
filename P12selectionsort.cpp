#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index;
    for(int i=0;i<n-1;i++)
    {
        index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            index = j;
        }
        swap(arr[index],arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}