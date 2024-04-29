//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int n = 5; // The number of prime numbers to be stored
//    if (n < 1) // Checks the validity of input
//    {
//        cout << "It seems the number of desired prime numbers has got an invalid value:" << endl;
//    }
//    else
//    {
//        int p[n] = { 2,0,0,0,0 }; // Generating an array of size 5
//        int pcount = 0;
//        int v = p[pcount] + 1; // The value to be tested
//        int r, i, pflag;
//        while (pcount < n - 1) { // The loop for number of generated values
//            r = pcount + 1;
//            i = 0;
//            pflag = 0;
//            while (i <= pcount && pflag == 0) { // Loop for testing v against each prime number p[i]
//                if (v % p[i] == 0) {
//                    v += 1; // Current v is not a prime number generate next value to be tested
//                    pflag = 1; // Flag to stop the inner loop
//                }
//                else {
//                    i += 1; // Move the index forward
//                }
//            }
//            if (pflag == 0) { // Check flag after finishing the inner loop
//                pcount += 1; // Increment pcount we found next prime number
//                p[pcount] = v; // Store the next prime number to the next position in the array
//            }
//        }
//        cout << "{ ";
//        for (auto element : p) // Printing the array
//        {
//            cout << element << " ";
//        }
//        cout << "}" << endl;
//    }
//    return 0;
//}