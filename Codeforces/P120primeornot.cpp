#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2,1,-5,7,8};
    for(int i=0;i<5;i++){
        int n = arr[i];
        if(n<=1){
            cout<<n<<" Not Prime "<<endl;
            continue;
        }
        else{
            bool flag = 0;
            for(int j=2;j<n;j++){
                if(n%j==0){
                    cout<<n<<" Not Prime "<<endl;
                    flag =1;
                    break;
                }
            }
            if(flag==0)
            cout<<n<<" Prime "<<endl;

        }
    }
}