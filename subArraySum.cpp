#include <iostream>
using namespace std;

int subArraySumBrute(int *arr, int n,int target);
int subArraySumBetter(int *arr, int n,int target);

int main() {
    int arr[] = {1, 2, 3, 1, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    // cout << subArraySumBrute(arr, n, 8);
    cout << subArraySumBetter(arr, n, 8);
}

int subArraySumBrute(int *arr, int n, int target) {
    int count = 0;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int sum = 0;
            for(int k=i; k<=j; k++) {
                sum += arr[k];
            }
            cout << "sum is " << sum << endl;
            if(sum == target) {
                count += 1 ;
            }
        }
    }
    return count;
}

int subArraySumBetter(int *arr, int n, int target) {
    int count = 0;
    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum += arr[j];  
            if(sum == target) {
                count += 1 ;
            }
        }
    }
    return count;
}