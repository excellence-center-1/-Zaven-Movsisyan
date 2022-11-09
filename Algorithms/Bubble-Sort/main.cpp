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

void bubble_sort(int array[], int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < (length - i - 1); j++){
            if(array[j] > array[j + 1]){
                int value = array[j];
                array[j] = array[j + 1];
                array[j + 1] = value;
            } 
        }
    }
}

void print_sorted_array(int array[], int length){
    cout << "Sorted array :\n";
    for(int i = 0; i < length; i++){
        cout << i << ",\n";
    }
}

int main(){
    int length = get_the_length();
    int array[length];
    bubble_sort(array, input_array(array, length));
    print_sorted_array(array,length);
}
