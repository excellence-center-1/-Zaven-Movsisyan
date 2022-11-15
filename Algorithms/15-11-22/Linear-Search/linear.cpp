#include <iostream>
using namespace std;


int linear_search(int arr[], int num){
    for(int i = 0; i < sizeof(arr); ++i){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {7,8,9,5,4,6,2,3,5};
    int num;
    cout << "Input n : \n";
    cin >> num;
    int res = linear_search(arr, num);
    if(res == -1){
        cout << "There is no " << num << " number.\n";
        }
    else{
        cout << "Index : " << res << endl;
    }
    
    

}

