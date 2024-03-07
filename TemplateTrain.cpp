#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
template<class T>
T array_max(T data[], int n) {
    T max_one = data[0];
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (data[j] > data[i]) {
                max_one = data[j];
            }
        }
    }
    return max_one;
}

int main() {
    int arr[5] = { 2, 8, 20, 3, 4 };
    int result = array_max<int>(arr, 5);
    cout << result;
}
*/

/*
#include <iostream>
using namespace std;

template<class T>
void swap_values(T& v1, T& v2){
  T temp = v1;
  v1 = v2;
  v2 = temp;
}

//ndex_of_smallest here
template<class T>
int index_of_smallest(T a[], int start_index, int size)
{
  T min_value = a[0];
  T min_index = 0;
  for (int i = start_index ; i < size ; i++){
    for (int j = start_index + 1 ; j < size ; j++){
      if(a[j]<a[i]){
        min_value = a[j];
        min_index = j;
      }
    }
  }
  return min_index;
}

*/
/*
template<class T>
void sort(T a[], int size)
{
    for (int i = 0; i < size; i++) {
        int smallest_item_index = index_of_smallest(a, i, size);
        swap_values(a[i], a[smallest_item_index]);
    }
}
*/