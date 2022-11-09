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

void insertion_sort(int array[], int length){
    for(int i = 1; i < length; i++){
        while((array[i - 1] > array[i]) & (i > 0)){
            int temp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = temp;
            i--;
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
    insertion_sort(array, input_array(array, length));
    print_sorted_array(array,length);
}
