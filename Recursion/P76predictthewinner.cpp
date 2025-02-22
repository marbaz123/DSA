#include <iostream>
#include <vector>
using namespace std;
// int findwinner(vector<bool>person,int n,int index,int person_left,int k){
//     if(person_left==1){
//         for(int i = 0;i<n;i++){
//             if(person[i]==0)
//             return i;
//         }
//     }
//     int kill = (k-1)%person_left;
//     while(kill--){
//         index = (index+1)%n;
//         while(person[index])
//         index = (index+1)%n;
//     }
//     person[index] = 1;
//     while(person[index])
//     index = (index+1)%n;
//     return findwinner(person,n,index,person_left-1,k);
// }
// int main ()
// {
//     int n = 5;
//     int k = 3;
//     vector<bool>person(n,0);
//     cout<<findwinner(person,n,0,n,k)<<endl;    
// }


//without using extra space
int winner(int n,int k){
    if(n==1)
    return 0;  // in case of n==1 winner is 0

    return (winner(n-1,k)+k)%n;
}
int main(){
    int n = 5;
    int k = 3;
    cout<<winner(n,k);
}