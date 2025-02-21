#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int index,int n)
{
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if(left<n && arr[largest] < arr[left])
    largest = left;
    if(right<n && arr[largest] < arr[right])
    largest = right;

    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
}

void buildHeap(int arr[],int n)
{
    for(int i = n/2-1;i>=0;i--)
    heapify(arr,i,n);
}

void printheap(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main ()
{
    int arr[] = {2,5,3,9,8,12,34,7,43,9};
    int n = 10;
    buildHeap(arr,n);

    printheap(arr,10);
}