#include <iostream>
#include <cmath>
using namespace std;

int jump(int arr[],int n, int length){
    int step = sqrt(length);
    int index = -1;

    for(int i = 0; i < length + 1; i += step){
        if(n < arr[i]){
            for(int j = i - step; j < i; j++){
                if(n == arr[j]){
                    index = j;    
                }
            }
        }
    }

    return index;
}

int main(){
    int num;
    cout << "Input the number : \n";
    cin >> num;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int res = jump(arr, num, sizeof(arr)/sizeof(arr[0]));
    if(res == -1){
        cout << "There is no number " << num << " in the list./n";
    }
    else{
        cout << "The index is : " << res << endl;
    }
}
