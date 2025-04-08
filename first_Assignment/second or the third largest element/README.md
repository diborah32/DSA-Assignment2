# Step Count Analyzer

This C++ program finds the second or third largest step count from an array of daily step counts.

## Features

- Finds the second or third largest element in an array of integers
- Handles edge cases (insufficient elements, no distinct values)
- Single-pass algorithm for efficiency
- Clear output messages

## Usage

1. Compile the program using a C++ compiler:
   ```bash
   g++ step_counter.cpp -o step_counter

## Algorithm for Second Largest Element

### Approach
1. Initialize two variables: `first` and `second` to minimum possible value
2. Traverse through the array:
   - If current element > `first`, update `second` to `first` and `first` to current element
   - Else if current element > `second` and ≠ `first`, update `second` to current element
3. Return `second`

### Pseudocode
```python
function findSecondLargest(arr):
    first = second = -∞
    for num in arr:
        if num > first:
            second = first
            first = num
        else if num > second and num ≠ first:
            second = num
    return second
    