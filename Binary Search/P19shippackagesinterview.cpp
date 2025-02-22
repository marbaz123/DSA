// ship packages

#include <iostream>
using namespace std;

int main()
{
    int A[] = {3,2,2,4,1,4};
    int M = 3; // number of days
    int N = 6; // no. of packages

    int start = 0, end = 0, mid, ans;

    for (int i = 0; i < N; i++)
    {
        if (start < A[i])
            start = A[i];
        end += A[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < N; i++)
        {
            pages += A[i];
            if (pages > mid)
            {
                count++;
                pages = A[i];
            }
        }

        if (count <= M)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    cout << ans;
}