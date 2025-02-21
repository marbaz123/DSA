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

    for(int i=1;i<n;i++)
    { 
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            break;
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}