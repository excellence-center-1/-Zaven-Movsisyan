#include <iostream>
using namespace std;

void make_heap(int arr[], int n, int i){
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2; 
	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i) {
		swap(arr[i], arr[largest]);
		make_heap(arr, n, largest);
	}
}

void heap_sort(int arr[], int n){
	for (int i = n / 2 - 1; i >= 0; i--)
		make_heap(arr, n, i);
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);
		make_heap(arr, i, 0);
	}
}

void print(int arr[], int n){
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main(){
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	heap_sort(arr, n);
	cout << "The sorted array :  \n";
	print(arr, n);
}

