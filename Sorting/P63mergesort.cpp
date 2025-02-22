#include <iostream>
#include <vector>
using namespace std;
void merge(int ans[], int start , int mid, int end)
{
    vector<int> temp;
        
    int left = start,right = mid+1,index = 0;
    while(left <= mid && right <= end)
    {
        if(ans[left] <= ans[right])
        temp.push_back(ans[left++]);
        else
        temp.push_back(ans[right++]);
    }
        
    while(left <= mid)
    temp.push_back(ans[left++]);
        
    while(right <= end)
    temp.push_back(ans[right++]);
        
    for(int i = 0;i<temp.size();i++)
    ans[start++] = temp[i];
}

void mergeSort(int arr[],int start,int end){
    if(start>=end)
    return;

    int mid = start + (end-start)/2;
    //left side
    mergeSort(arr,start,mid);
    //right side
    mergeSort(arr,mid+1,end);
    //merge
    merge(arr,start,mid,end);
}
int main ()
{
    int arr[] = {6,3,5,2,2,8,1,3,2,9};
    mergeSort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
}