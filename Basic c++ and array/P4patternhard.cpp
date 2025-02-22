#include <iostream>
using namespace std;

int main ()
{
    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col1 = 5; col1 >= row + 1; col1--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int col2 = 1 ;col2 <= row;col2++ )
    //     {
    //         cout<<'*';

    //     }
    //     cout<<endl;
    // }

    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col1 = 5; col1 >= row + 1; col1--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int col2 = 1 ;col2 <= row;col2++ )
    //     {
    //         cout<<col2<<" ";

    //     }
    //     cout<<endl;
    // }

    // char name = 'A';
    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col1 = 5; col1 >= row + 1; col1--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int col2 = 1 ;col2 <= row;col2++ )
    //     {
    //         cout<<name<<" ";
    //         name = name + 1;

    //     }
    //     cout<<endl;
    //     name = 'A';
    // }

    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col1 = 5; col1 >= row + 1; col1--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int col2 = row ;col2 >= 1;col2-- )
    //     {
    //         cout<<col2<<" ";

    //     }
    //     cout<<endl;
    // }

    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col1 = 5; col1 >= row + 1; col1--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int col2 = 1 ;col2 <= 2*row-1 ;col2++ )
    //     {
    //         cout<<'*'<<" ";

    //     }
    //     cout<<endl;
    // }

    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col = 5; col >= row + 1; col--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int col = 1 ;col <= row ;col++ )
    //     {
    //         cout<<col<<" ";

    //     }
    //     for(int col = row - 1 ;col >=1 ;col-- )
    //     {
    //         cout<<col<<" ";

    //     }
    //     cout<<endl;
    // }


    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col = 0; col <= row - 1; col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int col = 1 ;col <= 5 - row +1 ;col++ )
    //     {
    //         cout<<"*"<<" ";

    //     }
    //     for(int col = 1 ;col <= 5 - row ;col++ )
    //     {
    //         cout<<"*"<<" ";

    //     }
    //     cout<<endl;
    // }


    //     for(int row = 5;row >= 1;row--)
    // {
    //     for(int col = row; col >=1; col--)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     for(int col = 1 ;col <= 2*(5 - row) ;col++ )
    //     {
    //         cout<<"  ";

    //     }
    //     for(int col = row ;col >= 1 ;col-- )
    //     {
    //         cout<<"*"<<" ";

    //     }
    //     cout<<endl;
    // }
    // for(int row = 1;row <= 5;row++)
    // {
    //     for(int col = row; col >=1; col--)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     for(int col = 1 ;col <= 2*(5 - row) ;col++ )
    //     {
    //         cout<<"  ";

    //     }
    //     for(int col = row ;col >= 1 ;col-- )
    //     {
    //         cout<<"*"<<" ";

    //     }
    //     cout<<endl;
    // }


    for (int row = 1; row <= 5; row++)
    {
        for(int col = 5;col >row; col--)
        {
            cout<<" ";
        }
        for(int col = 1;col <=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int row = 5; row >= 1; row--)
    {
        for(int col = 5;col >row; col--)
        {
            cout<<" ";
        }
        for(int col = 1;col <=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}