#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main ()
{
    int n = 10;

    for(int i = n;i >= 0; i--){
        cout<<fibo(i)<<" ";
    }
    
}