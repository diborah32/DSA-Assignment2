#include <iostream>
using namespace std;

// Function to find the second or third largest element
int findSecondOrThirdLargest(int arr[], int size, int position) {
    // Check if there are enough elements
    if (size < position) {
        cout << "Not enough elements for position " << position << endl;
        return INT_MIN;
    }

    // Initialize largest, second largest, and third largest
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    // Single pass to find the top three elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] != first && arr[i] > second) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] != first && arr[i] != second && arr[i] > third) {
            third = arr[i];
        }
    }

    // Return based on the position requested
    if (position == 2) {
        if (second == INT_MIN) {
            cout << "No second largest exists" << endl;
            return INT_MIN;
        }
        return second;
    }
    else if (position == 3) {
        if (third == INT_MIN) {
            cout << "No third largest exists" << endl;
            return INT_MIN;
        }
        return third;
    }
    return INT_MIN; // Invalid position
}

int main() {
    // Array of step counts 
    int steps[] = {5000, 12000, 8000, 15000, 9000, 11000};
    int size = sizeof(steps) / sizeof(steps[0]);

    // Find the second largest
    int secondLargest = findSecondOrThirdLargest(steps, size, 2);
    if (secondLargest != INT_MIN) {
        cout << "The second largest step count is: " << secondLargest << endl;
    }

    // Find the third largest
    int thirdLargest = findSecondOrThirdLargest(steps, size, 3);
    if (thirdLargest != INT_MIN) {
        cout << "The third largest step count is: " << thirdLargest << endl;
    }

    return 0;
}