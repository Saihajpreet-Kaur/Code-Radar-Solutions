// Your code here...
#include <stdio.h>

// Function to find the K-th missing positive number
int findKthMissing(int arr[], int n, int k) {
    int missing_count = 0;  // Count of missing numbers
    int current = 1;        // Start from 1 (smallest positive integer)
    int index = 0;          // Array index

    while (missing_count < k) {
        if (index < n && arr[index] == current) {
            // If current number is in array, move to the next
            index++;
        } else {
            // If current number is missing, count it
            missing_count++;
            if (missing_count == k) {
                return current;  // Found the K-th missing number
            }
        }
        current++;  // Move to the next number
    }
    
    return -1;  // Should not reach here in valid cases
}