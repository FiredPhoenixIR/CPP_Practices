#include <iostream>
using namespace std;

// int grid[3][3];
//Note: Even though arrays behave similarly to pointers, 
// a multidimensional array is not a pointer - to - a - pointer.

//The objects grid, grid[0] and grid[0][0] are always at the same location (but different types).
//The objects of variable pptr and pointer *pptr, **pptr are at different locations.

//When evaluating grid[0][0]
//The array grid(which is an int[3][3]) is first converted to a pointer of type int(*)[3].
//Then taking the element at offset 0 yields an object of int[3].
//Then it is converted to int* again and the element at offset 0 is taken, 
// generating an object of type int& .
