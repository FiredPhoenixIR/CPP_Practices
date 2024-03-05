#include <iostream>
using namespace std;
/*
int findFrequent(int arr[], int n)
{

    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    int* freq = new int[maxElement+1](); // Array to store frequency of elements
    int mostFrequent = arr[0]; // Variable to store the most frequent element
    int maxFreq = 1; // Variable to store maximum frequency

    for (int i = 0; i < n; ++i) {

        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < mostFrequent)) {
            mostFrequent = arr[i];
            maxFreq = freq[arr[i]];
        }
        for (int j = 0; j <= maxElement;j++) {
            cout << *(freq+j) << " ";
        }
        cout << endl;
    }
    delete[] freq;
    return mostFrequent;

}


int main() {
    int simple_arr[8] = { 3,3,3,2,2,2,4,4 };
    int item = findFrequent(simple_arr, 8);
    cout << item ;
    return 0;
}
*/