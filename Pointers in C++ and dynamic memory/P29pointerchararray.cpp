#include <iostream>
using namespace std;
int main ()
{
    char arr[] = "1234";
    char *ptr = arr;

    cout<<ptr<<endl;
    cout<<arr<<endl;
    
    //print address
    cout<<(void*)ptr<<endl;
    cout<<(void*)arr<<endl;
    cout<<static_cast<void*>(arr)<<endl;
}