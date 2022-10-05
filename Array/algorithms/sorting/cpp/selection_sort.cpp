#include <bits/stdc++.h>
using namespace std;
void SelSort(int [], int); //function for selection sort

void SelSort(int AR[], int size){
	int small, pos, tmp;
	for(int i = 0; i < size - 1; i++){
		small = AR[i];
		pos = i;
		for(int j = i+1; j < size; j++){
			if(AR[j]<small){
				small = AR[j];
				pos = j;
			}
		}
		tmp = AR[i];
		AR[i] = AR[pos];
		AR[pos] = tmp;
		cout << "\nArray after pass - "<<i+1<<" - is:";
		for(int j = 0; j < size; j++) cout << AR[j] << " ";
	}
}

int main(){
	int AR[50], ITEM, N, index; //Array can hold max. 50 elements
	cout << "How many elements do U want to create array with? (max 50)...";
	cin >> N;
	cout << "\nEnter array elements...";
	for(int i = 0; i < N ; i++)
		cin >> AR[i];
	SelSort(AR, N);
	cout << "\n\nThe sorted array is as shown below...\n";
	for(int i = 0; i < N ; i++)
		cout << AR[i] << " ";
	return 0;
}
