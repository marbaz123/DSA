#include <iostream>
using namespace std;
int main ()
{
//     //2d array creation 
// int n,m;
// cout<<"enter the rows and cloumns of the array: ";
// cin>>n>>m;

//     int **ptr = new int*[n];
//     for(int i=0;i<n;i++)
//     ptr[i] = new int[m];

//     //input
//     cout<<"enter the values of the array: ";
//     for(int i=0;i<n;i++)
//     for(int j=0;j<m;j++)
//     cin>>ptr[i][j];

//     //print
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++)
//         cout<<ptr[i][j]<<" ";
//         cout<<endl;
//     }
    

//     //delete memory of the 2d array

//     for(int i=0;i<n;i++)
//     delete[] ptr[i];
//     delete[] ptr;


    // 3d array creation
    int L,B,H;
    cout<<"enter hte size of the array: ";
    cin>>L>>B>>H;

    int ***ptr = new int**[L];

    for(int i=0;i<L;i++)
    {
        int **ptr = new int*[B];
        for(int i=0;i<B;i++)
        ptr[i] = new int[H];
    }

    //input
    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;k<H;k++)
    ptr[i][j][k] = i+j+k;

    //print
    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;k<H;k++)
    cout<<ptr[i][j][k]<<" ";

    // release memory of 3d array -> homework
}