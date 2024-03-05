#include <iostream>
using namespace std;
/*
int* sortAsc(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (*(arr + j) < *(arr + i))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
            }
    }
    return arr;
}

int main() {
    int arr_1[10] = { 23, 34, 2, 3, 5, 12, 42, 56, 89, 8 };
    sortAsc(arr_1,10);
    for (int i=0;i<10;i++)
        cout << arr_1[i] << "-";

    //sortAsc([10, 9, 8, 7, 6, 5, 4, 3, 2, 1]);
    return 0;
}



    We call our function sortAsc and pass our array arr and it’s size 10 to it as parameters.
    The function above has the return type pointer that points to the array. Hence the int* return type is written.
    We use nested loops to iterate over the array.
    We compare each value of the array with all the values after it in the array.
    If the next value is less then the current value we swap them.
    The function then returns the updated p.
    At the end, we display the values by dereferencing the array values pointed to by pointer p.

*/