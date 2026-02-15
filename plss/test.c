#include <stdio.h>
#include <stdlib.h>

// Function to perform Linear Search and delete the found element
void deleteElement(int arr[], int *n, int x) {
    int i;
    for (i = 0; i < *n; i++) {
        if (arr[i] == x) { // Found the element to be deleted
            for (int j = i; j < (*n - 1); j++) {
                arr[j] = arr[j + 1]; // Shift remaining elements left
            }
            (*n)--; // Decrease array size
            break; // Exit the loop
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // The element to delete

    printf("Initial Array: \n");
    printArray(arr, n);

    deleteElement(arr, &n, x);
    printf("Array after deleting %d:\n", x);
    printArray(arr, n);

    return 0;
}