#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the array of sorted elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int start = 0,end = n-1,mid;
    int  key;
    cout<<"enter the number to search: ";
    cin>>key;
    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(arr[mid]==key){
            cout<<"element is present at position: "<<mid+1;
            return 0;
        }
        else if(arr[mid]<key)
            start = mid + 1;

        else
            end = mid-1;
    }
    cout<<"elemen is not present in the array";

}