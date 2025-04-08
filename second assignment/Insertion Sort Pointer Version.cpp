#include <iostream>
using namespace std;

void insertionSort(int* arr, int size) {
    for (int* i = arr + 1; i < arr + size; i++) {
        int key = *i;
        int* j = i - 1;
        
        while (j >= arr && *j > key) {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr, size);
    
    cout << "Insertion Sort Result: ";
    for (int* p = arr; p < arr + size; p++) {
        cout << *p << " ";
    }
    return 0;
}