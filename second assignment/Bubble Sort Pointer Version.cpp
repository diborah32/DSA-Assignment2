#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
    for (int* i = arr; i < arr + size - 1; i++) {
        bool swapped = false;
        for (int* j = arr; j < arr + size - (i - arr) - 1; j++) {
            if (*j > *(j + 1)) {
                swap(*j, *(j + 1));
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, size);
    
    cout << "Bubble Sort Result: ";
    for (int* p = arr; p < arr + size; p++) {
        cout << *p << " ";
    }
    return 0;
}