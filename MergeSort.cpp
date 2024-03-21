//#include<iostream>
//#include<memory>
//using namespace std;
// 
// // space : O(n)
// // time : O( n log n + n) -> O( n log n )
//
//void merge(int arr[], int leftindex, int midindex,int rightindex) {
//	// creating left and right arrays
//	int leftarraysize = midindex - leftindex + 1;
//	int rightarraysize = rightindex - midindex;
//	std::unique_ptr<int[]> leftarray(new int[leftarraysize]);
//	std::unique_ptr<int[]> rightarray(new int[rightarraysize]);
//	
//	for (int i = 0; i < leftarraysize; i++) {
//		leftarray[i] = arr[leftindex + i];
//	}
//	for (int j = 0; j < rightarraysize; j++) {
//		rightarray[j] = arr[j + midindex + 1];
//	}
//	// copy back sorted ones to original
//	int index = leftindex;
//	int i = 0;
//	int j = 0;
//	while (i < leftarraysize && j < rightarraysize) {
//		if (leftarray[i] < rightarray[j]) {
//			arr[index] = leftarray[i];
//			index++;
//			i++;
//		}
//		else {
//			arr[index] = rightarray[j];
//			index++;
//			j++;
//		}
//	}
//
//	while (i < leftarraysize) {
//			arr[index] = leftarray[i];
//			index++;
//			i++;
//		}
//
//	while (j < rightarraysize) {
//			arr[index] = rightarray[j];
//			index++;
//			j++;
//	}
//}
//
//void mergesort(int arr[], int leftindex, int rightindex) {
//	if (leftindex >= rightindex) { return; }
//	int midindex = leftindex + (rightindex - leftindex) / 2;
//	mergesort(arr, leftindex, midindex);
//	mergesort(arr, midindex+1, rightindex);
//	merge(arr, leftindex, midindex, rightindex);
//}
//
//int main() {
//	std::unique_ptr<int[]> MyArray(new int[8] {1, 3, 7, 8, 2, 5, 6, 9});
//	std::unique_ptr<int[]> MyArray2(new int[9] {6, 1, 3, 7, 8, 5, 2, 6, 9});
//	int sizeofarray1 = 8;
//	int leftindex = 0;
//	int rightindex = sizeofarray1-1;
//	int midindex1 = leftindex + (rightindex - leftindex) /2;
//
//	int sizeofarray2 = 9;
//	int rightindex2 = sizeofarray2 - 1;
//
//	merge(MyArray.get(), leftindex, midindex1, rightindex);
//	mergesort(MyArray2.get(), leftindex, rightindex2);
//
//	// Output the sorted array
//	for (int i = 0; i < sizeofarray1; ++i) {
//		cout << MyArray[i] << " ";
//	}
//	cout << endl;
//
//	// Output the sorted array
//	for (int i = 0; i < sizeofarray2; ++i) {
//		cout << MyArray2[i] << " ";
//	}
//	cout << endl;
//
//}