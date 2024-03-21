//#include<iostream>
//using namespace std;
//
//// O(n^2) for sorted array
//// randome data - O (n log n)
//// space : O(n)
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int pivot(int array[],int pivotindex,int endindex) {
//	int swapindex = pivotindex;
//	for (int i = pivotindex + 1; i <= endindex; i++) {
//		if (array[i] < array[pivotindex]) {
//			swapindex++;
//			swap(array[swapindex], array[i]);
//		}
//	}
//	swap(array[swapindex], array[pivotindex]);
//	return swapindex;
//}
//
//void quicksort(int array[], int leftindex , int rightindex) {
//	if (leftindex >= rightindex) { return; }
//	int pivotindex = pivot(array, leftindex, rightindex);
//		quicksort(array, leftindex, pivotindex - 1);
//		quicksort(array, pivotindex + 1, rightindex);
//}
//
//int main() {
//	int myArray[8] = { 4,6,1,7,3,2,5,5 };
//	quicksort(myArray, 0,7);
//	for (auto key : myArray) {
//		cout << key << "";
//	}
//}