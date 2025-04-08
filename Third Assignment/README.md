# Binary Search Algorithm in C++

This repository contains two implementations of the binary search algorithm using pointer arithmetic in C++:
1. Recursive approach
2. Iterative approach

## Table of Contents
- [Algorithm Details](#algorithm-details)
- [Implementation Specifics](#implementation-specifics)
- [Complexity Analysis](#complexity-analysis)
- [Usage](#usage)
- [Benchmarks](#benchmarks)
- [Contributing](#contributing)
- [License](#license)

## Algorithm Details

Binary search is an efficient algorithm for finding an item in a sorted array. It works by:
1. Comparing the target value to the middle element
2. If not found, eliminating half of the remaining elements
3. Repeating until the value is found or the search space is exhausted

Key properties:
- Requires sorted input
- Dramatically faster than linear search for large datasets

## Implementation Specifics

### Recursive Implementation
```cpp
int recursiveBinarySearch(int* arr, int* left, int* right, int target)