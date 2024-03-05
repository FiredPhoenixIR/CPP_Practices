#include <iostream>
using namespace std;
/*
void passReference(int* a, int* b) {
    int temp_a = *a; // Store the original value of 'a' to use it for the remainder calculation
    int temp_b = *b; // Store the original value of 'b' to use it for the power calculation

    // Task 1: Calculate a raised to the power b and store the result in the location pointed by a
    int result = 1;
    while (*b > 0) {
        result *= *a;
        (*b)--;
    }
    *a = result;

    // Task 2: Calculate a remainder b and store the result in the location pointed by b
    *b = temp_a % temp_b;
}
*/