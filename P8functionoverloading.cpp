#include <iostream>
using namespace std;

//function overloading
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main ()
{
    int a, b;
    cout<<"enter the numbers: ";
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<" ";
    cout<<endl;

    float f1 = 3.6,f2 = 4.5;
    Swap(f1,f2);
    cout<<f1<<" "<<f2<<" ";
}