// Your code here...
#include <stdio.h>
#include <string.h>

// Function to perform Selection Sort on strings
void selectionSort(char arr[][100], int n) {
    char temp[100];

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_index]) < 0) {
                min_index = j;
            }
        }
        // Swap arr[i] and arr[min_index]
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[min_index]);
        strcpy(arr[min_index], temp);
    }
}

// Function to print the sorted array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);  // Print each string on a new line
    }
}