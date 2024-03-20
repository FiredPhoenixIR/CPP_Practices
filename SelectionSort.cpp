//#include<iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int minindex(int arr[], int size,int begin_index) {
//	int min_index = begin_index;
//	for (int i = min_index + 1; i < size; i++) {
//		if (arr[i] < arr[min_index]) {
//			min_index = i;
//		}
//	}
//	return min_index;
//}
//
//void selectionSort(int arr[],int size) {
//	for (int i = 0; i < size; i++) {
//		int min_index = minindex(arr, size, i);
//		if (i != min_index) {
//			swap(arr[i], arr[min_index]);
//		}
//	}
//}
//
//int main() {
//	int MyArray[6] = { 5,7,2,8,1,3 };
//	int size_of_array = 6;
//	selectionSort(MyArray, size_of_array);
//	for (int i = 0; i < 6; i++) {
//		cout << MyArray[i];
//	}
//}