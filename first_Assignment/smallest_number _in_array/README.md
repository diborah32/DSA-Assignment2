
Algorithm for smallest number in array

Approach
Initialize the first element of the array as the smallest.

Traverse the array from the second element to the end.

Compare each element with the current smallest.

Update the smallest if a smaller number is found.

Return the smallest number after traversal


 pseudocode
 FUNCTION findSmallest(arr):
    smallest = arr[0]                // Step 1: Initialize
    FOR i FROM 1 TO length(arr) - 1: // Step 2: Traverse
        IF arr[i] < smallest:        // Step 3: Compare
            smallest = arr[i]        // Step 4: Update
    RETURN smallest                  // Step 5: Return