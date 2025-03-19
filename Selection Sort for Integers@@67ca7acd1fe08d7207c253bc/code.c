// Your code here...
#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Function to print the sorted array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");  // Space between numbers but no trailing space
        }
    }
    printf("\n");  // Newline at the end
}