# include <iostream>
# include <algorithm>
using namespace std;

void nintyDegreesRotate( int arr[3][3], int n, int m, int trans[3][3]);
void nintyDegreesRotateOptimal( int arr[3][3], int n, int m);

int main() {

    int arr[3][3] = { {1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9} };
    int trans[3][3] = { {0} };
    // nintyDegreesRotate(arr, 3, 3, trans);
     nintyDegreesRotateOptimal(arr, 3, 3);

    // printing the nintyDegreesRotated matrix
    cout << "nintyDegreesRotated matrix\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            // cout << trans[i][j] << "  ";
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}


// nintyDegreesRotate of a matrix
void nintyDegreesRotate( int arr[3][3], int n, int m, int trans[3][3]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            trans[j][n-i-1] = arr[i][j];
        }
    }
}

void nintyDegreesRotateOptimal( int arr[3][3], int n, int m) {
    // transposing inplace
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reversing each row
    // When you use mat[i], you are referring to the entire i-th row of the 2D array
    for(int i=0; i<n; i++) {
        reverse(begin(arr[i]), end(arr[i]));
    }
}
