#include <iostream>
using namespace std;

int find(int arr[], int n){
    int low = 0;
    int high = sizeof(arr);
    int mid = 0;
    while(low <= high){
        int mid = (low + high)/2;
        if(n == arr[mid]){
            return mid;
        }
        if(n > arr[mid]){
            low = mid + 1;    
        } 
        else{
            high = mid - 1;
        }
        
    }
    return -1;
}

int main(){
    int num;
    cout << "Input n : ";
    cin >> num;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int result = find(arr,num);
    if (result == -1){
        cout << "There is no " << num << " in array." << endl;
    }
    else{
        cout << "The index of " << num << " is " << result << endl;
    }
}
