#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {1, 3, 5, 6, 8};
    int *ptr = arr;

    //print address of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //print address of second element
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<ptr+1<<endl;

    //print value of first element
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<arr[0]<<endl;
    cout<<*ptr<<endl;

    //print all addresses of array

    for(int i=0;i<5;i++)
    {
        cout<<arr+i<<endl;
    }

    //print all values of array

    for(int i=0;i<5;i++)
    cout<<*(arr+i)<<endl;

    for(int i=0;i<5;i++)
    cout<<ptr[i]<<" ";
    cout<<endl;

    for(int i=0;i<5;i++)
    cout<<*(ptr+i)<<" ";
    cout<<endl;

    //arithmatic operations 
    for(int i=0;i<5;i++)
    {   cout<<*ptr<<" ";
        ptr++;
    }

    ptr = ptr+4;
    cout<<endl<<*ptr;
}