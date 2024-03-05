#include <iostream>
using namespace std;
/*
void test(int n) //you dont have to use "int n" anywhere in the code, it's passed for testing purposes
{
    int arr[5][5] = {};
    for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                arr[i][j] = (i*5) + (j+1);
                cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

#include<iostream>
using namespace std;

void test2(int n)
{

    int tArr[5][5];
    int i, j;
    for (i = 0; i < 5; i++) { //assign values to the two-dimensional array
        for (j = 0; j <= 5; j++) {
            if (i == 0) {
                tArr[i][j] = j + 1; //fill the first row
            }
            if (i > 0 && j == 0) {

                tArr[i][j] = tArr[i - 1][4] + 1; //fetching the value of the last cell in the previous row
            }
            else {
                tArr[i][j] = tArr[i][j - 1] + 1; //fill subsequent cells
            }
        }
    }
    for (i = 0; i < 5; i++) { //print the array
        for (j = 0; j < 5; j++) {
            cout << tArr[i][j] << " ";
        }
        cout << endl;

    }

}

int main() {
    test(6);
    return 0;
}
*/