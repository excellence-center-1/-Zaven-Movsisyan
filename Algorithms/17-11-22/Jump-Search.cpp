#include <iostream>
#include <cmath>
using namespace std;

int jump(int arr[],int n, int length){
    int step = sqrt(length);
    int low;
    int high;
    for(int i = 0; i < length + 1; i += step){
        if(n < arr[i]){
            low = i - step;
            high = i;
            break;
        }
    }


    for(int i = low; i < high; i++){
        if(n == arr[i]){
            return i;
        }
    }
}

int main(){
    int num;
    cout << "Input the number : \n";
    cin >> num;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout << jump(arr, num, sizeof(arr)/sizeof(arr[0])) << endl;

}
