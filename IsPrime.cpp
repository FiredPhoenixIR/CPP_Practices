//#include<iostream>
//using namespace std;
//
//void isPrime(int number) {
//    if (number <= 1) {
//        cout << "no" << endl;
//        return; // Numbers less than or equal to 1 are not prime
//    }
//    for (int i = 2; i * i <= number; ++i) {
//        if (number % i == 0) {
//            cout << "no" << endl;
//            return; // If number is divisible by any number from 2 to sqrt(number), it's not prime
//        }
//    }
//    cout << "yes" << endl;
//    return;; // If none of the above conditions met, number is prime
//}