#include <iostream>
using namespace std;


void length_array(int* length){
    cout << "Input the length : " << endl;
    cin >> *length;
    if(*length < 0){
        cout << "Size can not be negative." << endl;
        length_array(length);
    }
}


void input_list(int arr[], int length){
    int current;
    cout << "Input the list : " << endl;
    for(int i = 0; i < length; i++){
        cin >> current;
        arr[i] = current;
    }        
}


void input_element(int* elem){
    cout << "Input the number you want to get the index of." << endl;
    cin >> *elem;
}


int ternary_search(int arr[], int left, int right, int elem){
    int first_mid = left + (right - left) / 3;
    int second_mid = first_mid + (right - left) / 3;
    if(arr[first_mid] == elem){
        return first_mid;
    }
    if(arr[second_mid] == elem){
        return second_mid;
    }      
    if(elem < arr[first_mid]){
        ternary_search(arr, left, first_mid - 1, elem);
    }
    if(elem > arr[second_mid]){
        ternary_search(arr, second_mid + 1, right, elem);
    }
    else{
        ternary_search(arr, first_mid + 1, second_mid - 1, elem);
    }
}


bool includes(int arr[], int elem, int length){
    if(elem > 0){
        if((elem < arr[0]) || (arr[length - 1] < elem)){
            cout << "The number is not in this array." << endl;
            return false;
        }
    }
    else{
        if((elem > arr[0]) || arr[length - 1] > elem){
            return false;
        }
    }
    return true;
}


void insertion_sort(int arr[], int length){
    cout << "The array is sorting." << endl;
    for(int i = 1; i < length; i++){
        while((arr[i - 1] > arr[i]) & (i > 0)){
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            i--;
        }
    }
}

int main(){
    int length, elem;
    length_array(&length); 
    int *arr = new int(length);
    input_list(arr, length);
    input_element(&elem);
    if(includes(arr, elem, length)){
        insertion_sort(arr, length);   
        cout << "The index of " << elem << ": " << ternary_search(arr, 0, length - 1, elem) << endl;
    } 
    return 0;
}
