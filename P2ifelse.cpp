#include <iostream>
using namespace std;

int main(){
    int package;

    cout<<"enter your package: ";
    cin>>package;
    if(package>10){
        cout<<"accepted";
    }
    else{
        cout<<"rejected";
    }
}