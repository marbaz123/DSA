#include <iostream>
using namespace std;

int main()
{
    int num, ans=0,rem,mul = 1;

    // cout<<"enter the decimal number: ";
    // cin>>num;
    // // decimal to octal
    // while(num>0)
    // {
    //     rem = num % 8;  
    //     num = num / 8;  
    //     ans = rem*mul + ans;
    //     mul = mul * 10;
    // }
    // cout<<"octal number: "<<ans;

    //octal to decimal
    cout<<"enter the octal number: ";
    cin>>num;
    while(num>0)
    {
        rem = num % 10;  
        num = num / 10;  
        ans = rem*mul + ans;
        mul = mul * 8;
    }
    cout<<"decimal number: "<<ans;
}