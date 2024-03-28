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
//    int p[] = { 2,5,5,8,8,8,9,30,45 }; // Array 1
//    int q[] = { 4,5,5,6,7,7,8,8,9,10,45 };  // Array 2
//    const int lq = sizeof(q) / sizeof(q[0]); // Array 2 size
//    const int lp = sizeof(p) / sizeof(p[0]); // Array 1 size
//    const int lr = lp + lq;
//    int r[lr] = { 0 };
//    int i, j, k;
//    i = j = k = 0;
//    while (i < lp && j < lq) // This loop will terminate when the values of i,j are not less than lp and lq
//    {
//        if (p[i] < q[j]) // If the element of p is less than element of q
//        {
//            r[k] = p[i]; // Assigning value of p to r
//            i++;
//        }
//        else // If the element of p is not less than the element of q
//        {
//            if (p[i] > q[j]) // If the element of p is greater than the element of q
//            {
//                r[k] = q[j]; // Assign the value of q to r
//                j++;
//            }
//            else // The elements of p and q are equal
//            {
//                r[k] = p[i];
//                i++;
//                j++;
//            }
//        }
//        k++;
//    }
//    while (i < lp) // This loop will terminate when the value of i is not less than lp 
//    {
//        r[k] = p[i];
//        i++;
//        k++;
//    }
//    while (j < lq) // This loop will terminate when the value of j is not less than lq
//    {
//        r[k] = q[j];
//        j++;
//        k++;
//    }
//    cout << "\n Array 1 is: ";
//    print(p, lp);
//    cout << "\n Array 2 is: ";
//    print(q, lq);
//    cout << "\n Resultant array is: ";
//    print(r, k);
//    return 0;
//}