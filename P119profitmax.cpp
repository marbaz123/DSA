#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int find(int n)
{
    if(n<=4)
    return n;

    int ans = 1;

    while(n > 0)
    {
        if(n-3 > 1 || n-3 == 0)
        {
            ans *= 3;
            n  -= 3;
        }
        else
        {
            ans *= 2;
            n -= 2;
        }
    }

    return ans;
}
int main()
{
    int n;
    cout<<"enter the positive number: ";
    cin>>n;

    cout<<find(n);
}