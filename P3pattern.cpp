#include <iostream>
using namespace std;

int main()
{
    // char name = 'a';
    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col<=5;col++){
    //         cout<<name<<" ";
    //         name = name + 1;
    //     }
    //     cout<<endl;
    //     name = 'a';
    // }


    // char name = 'a';
    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col<=5;col++){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    //     name = name + 1;
    // }

    
    // for(int row = 1;row<=5;row++){
    //     for(int col = row; col>0;col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // char name = 'a'; 
    // for(int row = 1;row<=5;row++){
    //     for(int col = row; col>0;col--){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    //     name = name + 1;
    // }

    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col <= 5 - row + 1;col++){
    //         cout<<'*'<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col <= 5 - row + 1;col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row = 1;row<=5;row++){
        for(int col = 5; col >= 5 - row + 1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}