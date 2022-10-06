#include<bits/stdc++.h>
using namespace std;

int arr[10];
int L[10],R[10];
void merge(int l,int r)
{
    int mid = (l+r)/2;
    //size of L[] = a = mid-l+1
    int a = mid-l+1;
    for(int i=0;i<a;i++) 
    {
        L[i] = arr[i+l];
    }
    //size of R[] = b = r-mid;
    int b = r-mid;
    for(int i=0;i<b;i++) 
    {
        R[i] = arr[mid+i+1];
    }

    int i = 0, j = 0 , k = l;
    while(i<a && j<b)
    {
        if(L[i]<R[j])
        {
            arr[k++] = L[i++];
        }
        else arr[k++] = R[j++];
    }
    while(i<a) arr[k++] = L[i++];
    while(j<b) arr[k++] = R[j++];
}
void mergesort(int l, int r)
{
    //efficient 
    //Time complexity O(nlogn) Space Complexity O(n)
    if(l>=r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r);
}
int main()
{
    for(int i=0;i<10;i++) arr[i] = 11-i;
    mergesort(0,9);
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";
    return 0;
}
