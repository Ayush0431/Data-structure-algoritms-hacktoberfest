#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
	// largest variable is the root
	int largest = i;
    //considering 0 based indexing find left and right
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root i.e its value was changed 
	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
    //run heapify for all non leaf nodes 
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}
int main()
{
	int arr[] = {22,45,18,21,60,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	// Function call
	heapSort(arr, n);

	cout << "Sorted array is "<<endl;
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;
    //output -> array is sorted
    // 9 18 21 22 45 60
}
