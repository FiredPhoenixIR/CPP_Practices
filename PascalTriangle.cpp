#include <iostream>
using namespace std;
/*

int main() {
    int const size = 6;
    int arr[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            if (i < 2) {
                arr[i][j] = 1;
                cout << arr[i][j];
            }
            else if (i >= 2) {
                if (j == 0) {
                    arr[i][j] = 1;
                    cout << arr[i][j];
                }
                else if (j > 0) {
                    arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                    arr[i][i] = 1;
                    cout << arr[i][j];
                }
            }
            }
        cout << endl;
        }
    }
    */

/*
void printPascalTr(int size) { //define your function
    int** arr = new int* [size];
    // This line creates a pointer arr to a pointer to an integer (int*). 
    // It allocates memory to hold an array of pointers to integers. 
    // Each pointer in this array will represent a row in our two-dimensional array.
    for (int i = 0; i < size; i++) {
        arr[i] = new int[i + 1]; // Create columns dynamiclly
        for (int j = 0; j <= i; j++) {
            if (i < 2) {
                arr[i][j] = 1;
                cout << arr[i][j] << "\t";
            }
            else if (i >= 2) {
                if (j == 0) {
                    arr[i][j] = 1;
                    cout << arr[i][j] << "\t";
                }
                else if (j > 0) {
                    arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                    arr[i][i] = 1;
                    cout << arr[i][j] << "\t";
                }
            }
        }
        cout << endl;
    }
    for (int i = 0; i < size; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    printPascalTr(7);
    return 0;
}
*/