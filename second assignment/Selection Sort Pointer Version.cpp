#include <iostream>
using namespace std;

void selectionSort(int* arr, int size) {
    for (int* i = arr; i < arr + size - 1; i++) {
        int* min_ptr = i;
        for (int* j = i + 1; j < arr + size; j++) {
            if (*j < *min_ptr) {
                min_ptr = j;
            }
        }
        swap(*i, *min_ptr);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr, size);
    
    cout << "Selection Sort Result: ";
    for (int* p = arr; p < arr + size; p++) {
        cout << *p << " ";
    }
    return 0;
}