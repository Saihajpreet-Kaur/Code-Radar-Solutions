// Your code here...
#include <stdio.h>

// Function to find the length of the shortest unsorted subarray
int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the first element which is out of order from left
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }
    if (left == n - 1) return 0;  // The array is already sorted

    // Find the first element which is out of order from right
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Find the min and max in the unsorted subarray
    int min_val = arr[left], max_val = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Expand left boundary
    while (left > 0 && arr[left - 1] > min_val) {
        left--;
    }

    // Expand right boundary
    while (right < n - 1 && arr[right + 1] < max_val) {
        right++;
    }

    return right - left + 1;  // Length of the subarray
}