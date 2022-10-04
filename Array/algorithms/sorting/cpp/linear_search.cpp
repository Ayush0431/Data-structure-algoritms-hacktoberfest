#include <bits/stdc++.h>
using namespace std;
int linear_search(int ar[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int ar[] = {1, 2, 23, 45, 56};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << linear_search(ar, n, 45)<<endl;
    cout << linear_search(ar, n, 95);
    return 0;
}