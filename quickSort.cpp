#include <bits/stdc++.h>
using namespace std;

int partition(int *a,int s,int e){
	int i = s - 1;
	int j = s;
	int pivot = a[e];

	for(;j < e;j++){
		if(a[j] <= pivot){
			i++;
			swap(a[i],a[j]);
		}
	}

	//Bring the pivot element to its right position
	swap(a[e],a[i+1]);
	return i+1;
}


void quickSort(int a[],int s,int e){
	if(s >= e){
		return;
	}
	int p = partition(a,s,e);
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the number of elements of array \n";
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	quickSort(a,0,n-1);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}