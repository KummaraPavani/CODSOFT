#include <iostream>
using namespace std;


void zeroesAtEndBrute(int *arr, int n) {
    int newArr[n] = {0};
    // space complexity O(n)
    for(int i=0, j=0; i<n; i++) {
        if(arr[i] != 0) {
            newArr[j] = arr[i];
            j++;
        }
    }
    for(int i=0; i<n; i++) {
        cout << newArr[i] << " ";
    }
    
}

void zeroesAtEndOptimal(int *arr, int n) {
    // space complexity O(1)
    int j = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    for(int i=j; i<n; i++) {
        arr[i] = 0;
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
}

int main() {

    int arr[] = {2, 0, 3, 0, 5};
    int n = sizeof(arr) / sizeof(int);
    // zeroesAtEndBrute(arr, n);
    zeroesAtEndOptimal(arr, n);
    return 0;
}
