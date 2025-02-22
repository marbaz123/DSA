#include <iostream>
#include <math.h>
using namespace std;

// convert lower case to upper case
//  char convert(char name){
//      name -= 32; // also name = name - 'a' + 'A';
//      return name;
//  }
//  int main()
//  {
//      char name;
//      cout<<"enter any letter: ";
//      cin>>name;
//      char ans = convert(name);
//      cout<<ans;
//  }

// Armstrong Number
int countdigit(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

bool armstrong(int num, int digit)
{
    int rem, n = num, ans = 0;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cout << "enter any number: ";
    cin >> num;
    int digit = countdigit(num);
    cout << armstrong(num, digit);
}
