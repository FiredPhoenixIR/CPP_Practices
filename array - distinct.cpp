//#include <iostream>
//using namespace std;
//
//void print(int arr[], int size) // Function to print an array
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//}
//
//int main()
//{
//    int p[] = { 2,2,5,8,8,8,9,30,45 }; // Array that is entered
//    int lp = sizeof(p) / sizeof(p[0]); // Calculating length of array
//    int r[lp] = { p[0] }; // Creating an array
//    int i = 1;
//    int k = 0;
//
//    while (i < lp) // Loop to iterate and make a new array
//    {
//        if (p[i] != p[i - 1])
//        {
//            r[k] = p[i - 1];
//            k++;
//        }
//        i++;
//    }
//    cout << "Array that is entered: ";
//    print(p, lp);
//    cout << endl;
//    cout << "Output array: ";
//    print(r, k);
//    return 0;
//}