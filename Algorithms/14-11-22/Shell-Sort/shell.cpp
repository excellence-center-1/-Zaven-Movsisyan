#include  <iostream> 
using namespace std; 

void shellSort(int arr[], int n){ 
    for (int gap = n/2; gap > 0; gap /= 2){ 
        for (int i = gap; i < n; i += 1){ 
            int temp = arr[i];
            int j; 
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){
                arr[j] = arr[j - gap]; 
            }   
            arr[j] = temp; 
        } 
    } 
} 
   

int main(){ 
    int arr[] = {45,23,53,43,18,24,8,95,101}, i; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Array to be sorted: \n"; 
    for (int i=0; i<n; i++){ 
        cout << arr[i] << " ";
    }
    cout << endl; 
    shellSort(arr, n); 
    cout << "Array after shell sort: \n"; 
    for (int i=0; i<n; i++){ 
        cout << arr[i] << " "; 
    }
    return 0; 
}
