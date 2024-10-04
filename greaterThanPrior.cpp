# include <iostream>
using namespace std;

int priorElementBrute(int *arr, int n);
int priorElementOptimised(int *arr, int n);

int main() {

    int arr[] = {7, 4, 8, 2, 9};
    // int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    // cout << priorElementBrute(arr,n);
    cout << priorElementOptimised(arr,n);
    return 0;
}

int priorElementBrute(int *arr, int n) {
    int count = 1;
    for(int i=1; i<n; i++) {
        bool flag = true;
        int curr = arr[i];
        for(int j=0; j<i; j++) {
            if(arr[j] > curr) {
                flag = false;
                break;
        }
    }
    if(flag) {
        count++;
    }
    }
    return count;
}

int priorElementOptimised(int *arr, int n) {
    int count = 1;
    int priorMax = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > priorMax) {
            count++;
            priorMax = arr[i];
        }
    }
    return count;
}