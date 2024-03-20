//#include<iostream>
//#include<memory>
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void sortarray(int arr[],int size) {
//	for (int i = 0; i < size; i++) {
//		for(int j = i+1 ; j < size  ; j++) {
//			if (arr[i] > arr[j]) {
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//}
//
//
//int main() {
//	std::unique_ptr<int[]> ptrar(new int[9] {4, 2, 8, 3, 8, 1, 5, 9, 7});
//	int size_of_array = sizeof(ptrar);
//	sortarray(ptrar.get(), size_of_array);
//	for (int i = 0; i < 8; i++) {
//		cout << ptrar[i];
//	}
//}