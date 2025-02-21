#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int index, int n)
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

void heapSort(int arr[],int n)
{
    buildHeap(arr,n);
    for(int i=n-1;i>=0;i--)
    {   
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}

void printheap(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main ()
{
    int arr[] = {4,3,6,9,7,19,16,25,11,20};
    heapSort(arr,10);
    printheap(arr,10);
}