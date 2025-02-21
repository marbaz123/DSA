#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;
    if(num==0)
    return 0;
    if(num==1)
    return 1;
    int start = 0, mid, end = num, ans = 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == num/mid)// mid*mid can be used but it will give integer overflow error in different test case
        {
            ans = mid;
            break;
        }
        else if (mid < num/mid) // mid*mid can be used but it will give integer overflow error in different test case
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    cout << ans;
}