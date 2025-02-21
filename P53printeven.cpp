#include <iostream>
using namespace std;
void printeven(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }
    // if(n%2==1){
    //     printeven(n-3);
    //     cout<<n-1<<endl;
    // }
    // else{
    //     printeven(n-2);
    //     cout<<n<<endl;
    // }
    if(n%2==1){
        n--; 
    }
    printeven(n-2);
    cout<<n<<endl;
}
int main ()
{
    int n = 15;
    printeven(n);
    
}