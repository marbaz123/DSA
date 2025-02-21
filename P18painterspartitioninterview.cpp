// painters partition
// walls will be allocated in contigous way
// out of all permutation painters with most number of walls get min time (time of one wall = i unit)
#include <iostream>
using namespace std;

int main()
{
    int A[] = {5, 10, 30, 20, 15};
    int M = 3; // number of painters
    int N = 5; // no. of paints

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