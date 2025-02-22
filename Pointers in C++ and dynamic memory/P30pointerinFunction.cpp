#include <iostream>
using namespace std;
//pass by reference
void swap(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
//pass by pointer
void swapp(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void dob(int p[])  // p[] and *p are same 
{
    for(int i=0;i<5;i++)
    p[i] = 2*p[i];
}
int main ()
{
    int a = 10, b = 20, c = 30, d = 40;
    //pass by reference
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    //pass by pointer
    swapp(&c,&d);
    cout<<c<<" "<<d<<endl;

    int arr[] = {1,2,3,4,5};
    dob(arr);

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    
}