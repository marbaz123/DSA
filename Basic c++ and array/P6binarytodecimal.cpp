#include <iostream>
using namespace std;

int main()
{
    int num, ans=0,rem,mul = 1;
    cout<<"enter the binary number: ";
    cin>>num;

    while(num>0)
    {
        rem = num % 10;  // can be used
        num = num / 10;  // right shift 
        ans = rem*mul + ans;
        mul = mul * 2;
    }
    cout<<"decimal number: "<<ans;
}