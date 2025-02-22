#include <iostream>
using namespace std;
int main ()
{
    //varible ke liye heap memory allocate karo
    int *ptr = new int;
    *ptr = 5;
    cout<<*ptr<<endl;

    int n;
    cout<<"enter size of the array: ";
    cin>>n;

    int *p1 = new int[n];

    //value assing
    for(int i=0;i<n;i++){
        p1[i]=i+1;
    }

    //print 
    for(int i=0;i<n;i++)
    cout<<p1[i]<<" ";

    //delete keyword
    delete ptr;
    delete []p1;

    
}