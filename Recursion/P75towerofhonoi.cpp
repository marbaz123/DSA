#include <iostream>
using namespace std;
void toh(int n,string S,string H,string D){
    if(n==1){
        cout<<"move disk "<<n<<" from rod "<<S<<" to rod "<<D<<endl;
        return;
    }
    toh(n-1,S,D,H);
    cout<<"move disk "<<n<<" from rod "<<S<<" to rod "<<D<<endl;
    toh(n-1,H,S,D);
}
int main ()
{
    toh(2,"source","helper","destition");   
}