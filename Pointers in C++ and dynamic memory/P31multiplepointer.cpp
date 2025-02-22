#include <iostream>
using namespace std;
int main ()
{
    int n = 10;
    int *p1 = &n;  // single pointer
    int **p2 = &p1; // double pointer
    int ***p3 = &p2;  // triple pointer

    cout<<p1<<endl;
    cout<<&p1<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<p3<<endl;

    // change in value
    *p1 = *p1 +1;
    cout<<*p1<<endl;

    **p2 = **p2 +1;
    cout<<**p2<<endl;

    ***p3 = ***p3 +1;
    cout<<***p3<<endl;

    //change in pointer
    *p2 = *p2 +1;
    cout<<*p2<<endl;

    **p3 = **p3 +1;
    cout<<**p3<<endl;
}