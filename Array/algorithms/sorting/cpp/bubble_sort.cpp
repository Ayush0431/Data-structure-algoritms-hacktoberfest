#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int [], int); //function for bubble sort

void BubbleSort(int AR[], int size){
	int tmp, ctr = 0;
	for(int i = 0; i< size; i++){
	    for(int j = 0; j< (size-1) - i; j++){
	    if(AR[j]>AR[j+1]){
	        tmp = AR[j];
	        AR[j] = AR[j+1];
	        AR[j+1] = tmp;
	    }
	  }
	  cout<<"Array after iteration -"<<++ctr<<"- is:";
	  for(int k = 0; k < size ; k++)
	    cout<<AR[k]<<" ";
	  cout<<endl;
	}
}

int main(){
	int AR[50], ITEM, N, index; //Array can hold max. 50 elements
	cout << "How many elements do U want to create array with? (max 50)...";
	cin >> N;
	cout << "\nEnter array elements...";
	for(int i = 0; i < N ; i++)
		cin >> AR[i];
	BubbleSort(AR, N);
	cout << "\n\nThe sorted array is as shown below...\n";
	for(int i = 0; i < N ; i++)
		cout << AR[i] << " ";
	return 0;
}
