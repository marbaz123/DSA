#include <iostream>
using namespace std;
int linearsearch(int arr[], int index,int x){
    if(index==-1)
    return 0;

    if(arr[index]==x)
    return 1;

    linearsearch(arr,index-1,x);
}
int main ()
{
    int arr[] = {3,6,7,5,2};
    cout<<linearsearch(arr,4,5)<<endl;
}