#include <iostream>
using namespace std;

int main()
{
    int temp;
    int arr[6] = {2,7,4,11,5,8};
    temp = arr[5];
    for(int i=5;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    for(int i=0;i<=5;i++)
    cout<<arr[i]<<" ";
}