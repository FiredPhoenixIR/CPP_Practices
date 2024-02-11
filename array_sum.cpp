#include<iostream>
using namespace std;

static int sum_arr(int arr[], int n) {
	int s = 0;
	for (int i = 0;i < n;i++)
		s += arr[i];
	return s;
}

int main() {
	int x[5] = { 2,4,6,8,10 };
	int result;
	result = sum_arr(x, 5);
	cout << result;
}