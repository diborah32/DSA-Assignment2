# Search Algorithms in C++

Implementation of Ternary Search and Interpolation Search algorithms using basic arrays.

## Table of Contents
- [Algorithms Overview](#algorithms-overview)
- [Implementation Details](#implementation-details)
- [Complexity Analysis](#complexity-analysis)
- [Usage Instructions](#usage-instructions)
- [Performance Comparison](#performance-comparison)

## Algorithms Overview

### Ternary Search
A divide-and-conquer algorithm that divides the search space into three parts.

### Interpolation Search 
An improved search that estimates target position based on value distribution.

## Complexity Analysis

### Time Complexity

| Algorithm | Best Case | Average Case | Worst Case |
|-----------|----------|--------------|------------|
| **Ternary Search** | O(1) | O(log₃n) | O(log₃n) |
| **Interpolation Search** | O(1) | O(log log n)* | O(n) |

*When elements are uniformly distributed

### Space Complexity
Both algorithms use **O(1)** auxiliary space (iterative implementation)

### Detailed Comparison

#### Ternary Search
- **Divide Factor**: 3-way split → log₃n complexity
- **Comparisons per Iteration**: 2 (for mid1 and mid2)
- **Optimal For**: 
  - Unimodal functions
  - Cases where 3-way division is natural

#### Interpolation Search
- **Key Formula**: 
  ```math 
  pos = low + \frac{(target - arr[low]) \times (high - low)}{arr[high] - arr[low]}