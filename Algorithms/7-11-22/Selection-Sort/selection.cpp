#include <iostream>
using namespace std;

int get_the_length(){
    int length;
    cout << "Input the length :\n";
    cin >> length;
    return length; 
}

int input_array(int array[], int length){
    for(int i = 0; i < length; i++){
        cout << "Input the " << i + 1 << " Element :\n";
        cin >> array[i];
    }
    return length;
}

void selection_sort(int array[], int length){
    for(int i = 0; i < length; i++){
        for(int j = i; j < length; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;    
            }
        } 
    }
}

void print_sorted_array(int array[], int length){
    cout << "Sorted array :\n";
    for(int i = 0; i < length; i++){
        cout << array[i] << ",\n";
    }
}

int main(){
    int length = get_the_length();
    int array[length];
    selection_sort(array, input_array(array, length)); 
    print_sorted_array(array, length);
}
