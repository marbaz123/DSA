#include <iostream>
#include <math.h>
using namespace std;

//to print the elements of the array
// void printArray(int arr[],int index,int size){
//     if(index==size)
//     return;
//     cout<<arr[index]<<" ";
//     printArray(arr,index+1,size);
// }

//to print element of the array
void printArray(int arr[],int size){
    if(size==0){
        return;
    }
    
    printArray(arr,size-1);
    cout<<arr[size-1]<<" ";
}
//to find sum of the array
int arraySum(int arr[], int index){
    if(index==-1)
    return 0;
    return arr[index]+arraySum(arr,index-1);
}
//to find minimum element of the array
int minelement(int arr[],int index){
    if(index==0)
    return arr[0];

    return min(arr[index],minelement(arr,index-1));

}
int main ()
{
    int arr[] = {4,5,7,6,2};
//    printArray(arr,0,5);

    printArray(arr,5);
    cout<<endl<<arraySum(arr,5-1)<<endl;
    cout<<minelement(arr,5-1);
    
}