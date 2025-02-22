// book allocation
// every student get atleast one book
// books will be allocated in contigous way
// out of all permutation students with most number of books get min pages
#include <iostream>
using namespace std;

int main()
{
    int A[] = {12, 34, 67, 90};
    int M = 2; // number of students
    int N = 4; // number of books
    if (M > N)
        return -1;

    int start = 0, end = 0, mid, ans;

    for (int i = 0; i < N; i++)
    {
        start = max(start, A[i]);
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