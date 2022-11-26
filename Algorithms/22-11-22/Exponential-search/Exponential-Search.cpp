#include <bits/stdc++.h>
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


int binary_search(int arr[], int left, int right, int elem){
    if (right >= left){
        int mid = left + (right - left)/2;
        if (arr[mid] == elem){
            return mid;
        }
        if (arr[mid] > elem){
            return binary_search(arr, left, mid-1, elem);
        }
        return binary_search(arr, mid+1, right, elem);
    }
    return -1;
}


int minimum(int length, int current){
    if (length < current){
        return length;
    }
    return current;
}


int exponential_search(int arr[], int length, int elem){
    if (arr[0] == elem)
        return 0;
    int i = 1;
    while (i < length && arr[i] <= elem)
        i = i*2;
    return binary_search(arr, i/2, minimum(i, length - 1), elem);
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


int main(void){   
    int length, elem;
    length_array(&length); 
    int *arr = new int(length);
    input_list(arr, length);
    input_element(&elem);
    if(includes(arr, elem, length)){
        insertion_sort(arr, length);   
        cout << "The index of " << elem << ": " << exponential_search(arr, length, elem) << endl;
    } 
    return 0;
}


