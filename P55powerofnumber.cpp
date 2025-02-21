#include <iostream>
using namespace std;
//power of any number
int powerofnum(int num, int n){
    if(n==1)
    return num;

    return num*powerofnum(num,n-1);
}
//sum of square of number
int sumofsquare(int n){
    if(n==1)
    return 1;

    return n*n+sumofsquare(n-1);
}
int main ()
{
    cout<<powerofnum(3,3)<<endl;
    cout<<sumofsquare(4)<<endl;
    
}