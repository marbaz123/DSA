//greatest common divisor
#include <iostream>
using namespace std;
void gcd(int a,int b){
    if(b==0){
        cout<<a;
        return;
    }
    gcd(b,a%b);
}
int main ()
{
    gcd(18,48);
    
}