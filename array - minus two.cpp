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
//    int p[] = { 2,5,5,8,8,8,9,30,35 }; // Array 1
//    int q[] = { 4,5,5,6,7,7,8,9,10 };  // Array 2
//    int lq = sizeof(q) / sizeof(q[0]); // Array 1 size
//    int lp = sizeof(p) / sizeof(p[0]); // Array 2 size
//    int lr = lp + lq;
//    int r[lr] = { 0 }; // Array of size lr
//    int i, j, k;
//    i = j = k = 0;
//    while (i < lp && j < lq) // This loop will terminate when the values of i,j are not less than lp and lq
//    {
//        if (p[i] < q[j]) // If the element of p is less than the element of q
//        {
//            r[k] = p[i]; // Assigning p to r
//            i++;
//            k++;
//        }
//        else // If the element of p is not less than the element of q
//        {
//            if (p[i] > q[j]) // If the element of p is greater than element of q 
//            {
//                j++;
//            }
//            else // The elements of p and q are equal
//            {
//                i++;
//                j++;
//            }
//        }
//    }
//    while (i < lp) // This loop will terminate when the value of i is not less than lp
//    {
//        r[k] = p[i]; // Assigning to r
//        i++;
//        k++;
//    }
//    cout << "\n Array 1 is: ";
//    print(p, lp);
//    cout << "\n Array 2 is: ";
//    print(q, lq);
//    cout << "\n Resultant array is: ";
//    print(r, k);
//    cout << endl;
//    return 0;
//}