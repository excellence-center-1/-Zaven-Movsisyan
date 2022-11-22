#include <iostream>
using namespace std;

int condition(int n){
    int res = n * n - 10 * n - 20;
    return res;
}

int binarySearch(int right, int left){
    return 0;
}

int main(){
    int num, left, right;
    int i = 1;
    while(condition(i) <= 0){
        i *= 2;
    }
    binarySearch(i/2,i);
    left = i/2;
    right = i;
    cout << "Left : " <<  left << endl << "Right : " << right << endl;
}


