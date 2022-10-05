#include <bits/stdc++.h>
using namespace std;
int binary_search(int ar[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (ar[mid] == key)
        {
            return mid;
        }
        else if (ar[mid] > key)
        {
            // end = mid - 1;
            start = mid + 1;
        }
        else
            end = mid - 1;
        // start = mid + 1;
        {
        }
    }
    return -1;
}
int main()
{
    int ar[] = {1, 2, 4, 5, 7, 8};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << binary_search(ar, n, 7);
    return 0;
}