#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearchIterative(int arr[], int n, int key)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}

int BinarySearchRecursive(int arr[], int l, int r, int key)
{
    if (l > r)
        return -1;

    int mid = (l + r) >> 1;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return BinarySearchRecursive(arr, mid + 1, r, key);
    else
        return BinarySearchRecursive(arr, l, mid - 1, key);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int &x : arr)
        cin >> x;
    sort(arr, arr + n);
    int key;
    cin >> key;
    cout << BinarySearchIterative(arr, n, key) << endl;
    cout << BinarySearchRecursive(arr, 0, n - 1, key) << endl;
}