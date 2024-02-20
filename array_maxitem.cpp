#include<iostream>
using namespace std;

/* \0 is null */

/*
int max_item_arr(int x[], int a, int b, int c)
{
	int max_item = x[0];
	for (int i = 0; i < a;i++) { // looping through plates
		for (int ii = 0;ii < b;ii++) { // looping through rows
			for (int iii = 0;iii < c;iii++) { //looping through cols
				if (x[i * b * c + ii * c + iii] > max_item)
					max_item = x[i * b * c + ii * c + iii];
			}
		}
	}
	return max_item;
}

int main() {
	int ex_arr[3][2][4] = { 1,2,3,4 ,5,6,7,8  ,9,10,11,12 ,13,14,15,16  ,17,18,19,20 ,21,22,23,24 };
	int result = max_item_arr(*ex_arr[0], 3, 2, 4);
	cout << result << endl;
}
*/