#include <iostream>
using namespace std;

int ternarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        
        if (arr[mid1] == target) {
            return mid1;
        }
        if (arr[mid2] == target) {
            return mid2;
        }
    
        if (target < arr[mid1]) {
            right = mid1 - 1;
        }
        else if (target > arr[mid2]) {
            left = mid2 + 1;
        }
        else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 13;
    
    int result = ternarySearch(arr, size, target);
    
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    
    return 0;
}