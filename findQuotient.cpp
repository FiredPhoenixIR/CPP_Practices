//int findQuotient(int arr[], int size, int n)
//{
//    int count = 0;
//
//    // Iterate through all pairs (a, b) in the array
//    for (int i = 0; i < size; i++) {
//        for (int j = i + 1; j < size; j++) {
//            // Check if the quotient is equal to n and a is perfectly divisible by b
//            if (arr[i] % arr[j] == 0 && arr[i] / arr[j] == n) {
//                count++;
//            }
//            // Check if the quotient is equal to n and b is perfectly divisible by a
//            else if (arr[j] % arr[i] == 0 && arr[j] / arr[i] == n) {
//                count++;
//            }
//        }
//    }
//
//    return count;
//}