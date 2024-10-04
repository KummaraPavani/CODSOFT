#include <iostream>
#include <algorithm>  // For reverse function

using namespace std;

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Reverse each row using the start and end iterators
    for (int i = 0; i < 3; i++) {
        cout << mat[i] << endl;
        reverse(begin(mat[i]), end(mat[i]));  // Reverse each row
    }

    // Print the reversed 2D array
    cout << "Matrix after reversing each row:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
