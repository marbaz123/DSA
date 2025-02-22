#include <iostream>
using namespace std;
int nthstair(int n){
    if(n<=2)
    return n;

    return nthstair(n-1)+nthstair(n-2);
}
int main ()
{
    int n = 5;
    if(n=0)
    cout<<1;
    cout<<nthstair(n);
    
}