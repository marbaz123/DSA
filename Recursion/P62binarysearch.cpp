#include <iostream>
using namespace std;
int binarysearch(int arr[], int start,int end,int x){
    int mid = start+(end-start)/2;
    if(start>end)
    return 0;

    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
        return binarysearch(arr,mid+1,end,x);
    }
    else{
        return binarysearch(arr,start,mid-1,x);
    }
}
int main ()
{
    int arr[] = {3,6,7,8,9};
    cout<<binarysearch(arr,0,4,9)<<endl;
}