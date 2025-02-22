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

    for(int i=0;i<n-1;i++)
    {
        bool swapped = 0; 
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}