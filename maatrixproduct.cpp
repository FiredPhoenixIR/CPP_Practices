//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a[3][4] = { {1,2,3,4} , {5,6,7,8} ,{9,10,11,12} };
//    int b[4][2] = { {10,20}, {30,40}, {50,60}, {70,80} };
//    int aROWS = 3;
//    int aCOLS = 4;
//    int bROWS = 4;
//    int bCOLS = 2;
//    int cROWS = 3;
//    int cCOLS = 2;
//    int c[3][2] = { {0,0},{0,0},{0,0} };
//    for (int i = 0; i < aROWS; i++)
//    {
//        for (int j = 0; j < aCOLS; j++)
//        {
//            for (int k = 0; k < bCOLS; k++)
//            {
//                c[i][k] += a[i][j] * b[j][k];
//            }
//        }
//    }
//    cout << "Displaying in matrix form: " << endl;
//    for (int i = 0; i < cROWS; i++) // Printing a 2-dimensional array
//    {
//        for (int j = 0; j < cCOLS; j++)
//        {
//            cout << c[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    return 0;
//}