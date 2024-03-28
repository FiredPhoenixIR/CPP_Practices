//#include <iostream>
//using namespace std;
//
//void print(int arr[], int size) // Function to print an array
//{
//    cout << "{ ";
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << "}";
//
//    cout << endl;
//}
//int main()
//{
//    int a[] = { 2 , 8 , 3 , 15 }; // Enter the array for circular traversal  
//    int i = 0;
//    int j = 0;
//    int size = sizeof(a) / sizeof(a[0]);
//    int allneg = 0;
//    int addneg = 0;
//    while (allneg == 0) // This loop will terminate when the value of allneg is zero
//    {
//        if (a[i] > 0) // If the value of a is greater than zero
//            cout << "Now PROCESSING the index " << i << endl;
//        else
//        {
//            if (i != j) // If i is not equal to j
//                cout << "Now skipping the index " << i << endl;
//            else
//                cout << "Now STOPPING at the index " << i << endl;
//        }
//        cout << i << " ";
//        print(a, size);
//        if (a[i] > 0) // If the value of a is greater than zero
//        {
//            a[i] = -a[i]; // Converting value to negative value
//            int k = 0;
//            int ii = i; // Storing value of i in ii
//            out << "Moving " << -a[i] << " steps" << endl;
//            while (k < -a[i]) // This loop will terminate when k is not less than -a[i]
//            {
//                ii = (ii + 1) % size;
//                k += 1;
//                cout << ". " << ii << " ";
//                print(a, size);
//            }
//            i = ii; // Storing the updated value of ii to i
//            addneg = 1;
//        }
//        else // If the value of a is not greater than zero
//        {
//            if (addneg == 1)  // If the value of addneg is 1
//            {
//                j = i;
//                addneg = 0; // Change the value of addneg to 0
//            }
//            else
//            {
//                if (j == i) // If i is equal to j
//                    allneg = 1;
//            }
//            i = (i + 1) % size; // Update value of i
//        }
//    }
//    cout << " *** DONE *** " << endl;
//    return 0;
//}