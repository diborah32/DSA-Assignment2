#include <iostream>

using namespace std;

// Function to find smallest element in an array
int findSmallest(int arr[], int size) {
    if (size <= 0) {
        cerr << "Error: Invalid array size\n";
        return 0; // Default return for empty array
    }
    
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int numbers[] = {5, 2, 9, 1, 7, -3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int result = findSmallest(numbers, size);
    cout << "The smallest element is: " << result << endl;
    
    return 0;
}