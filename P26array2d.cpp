#include <iostream>
using namespace std;
int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int row = 4,col = 3;
    for(int i=0;i<row;i++)
    {   for(int j=0;j<col;j++){
          cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
}