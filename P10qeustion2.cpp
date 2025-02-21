#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "enter any number: ";
    cin >> num;
    while (num % 2 == 0 && num % 5 == 0)
    {
        count++;
        num /= 10;
    }
    cout << "number of zeros: " << count;
}