#include <iostream>
using namespace std;

int main()
{
    int num, ans=0,rem,mul = 1;
    cout<<"enter the decimal number: ";
    cin>>num;

    // while(num>0)
    // {
    //     rem = num % 2;
    //     num = num / 2;
    //     ans = rem*mul + ans;
    //     mul = mul * 10;
    // }

    // while(num>0)
    // {
    //     rem = num&1;  // can be used
    //     num = num / 2;
    //     ans = rem*mul + ans;
    //     mul = mul * 10;
    // }
    while(num>0)
    {
        rem = num&1;  // can be used
        num = num>>1;  // right shift 
        ans = rem*mul + ans;
        mul = mul * 10;
    }
    cout<<"binary number: "<<ans;
}