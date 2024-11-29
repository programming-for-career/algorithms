#include <stdio.h>

// Function: Perform Bubble Sort
// Purpose: Sorts an array in ascending order using the Bubble Sort algorithm.
// Parameters:
// - arr[]: The array to be sorted.
// - n: The size of the array.
// Time Complexity: 
// - Best Case: O(n) (when the array is already sorted, with optimization)
// - Worst Case: O(n^2) (when the array is sorted in reverse order)
// Space Complexity: O(1) - in-place sorting.

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Loop for the number of passes
        int swapped = 0; // To check if a swap occurred in this pass
        for (int j = 0; j < n - i - 1; j++) { // Loop through unsorted part
            if (arr[j] > arr[j + 1]) { // Compare adjacent elements
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Mark as swapped
            }
        }
        if (swapped == 0) { // If no swaps occurred, the array is sorted
            break;
        }
    }
}

int main() {
    // Variable to store the size of the array
    int n;

    // Input: Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input: Prompt user to enter the elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform bubble sort
    bubble_sort(arr, n);

    // Output: Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
=====================
Sample Input/Output:
=====================

Sample Input 1:
Enter the number of elements: 5
Enter the elements: 64 34 25 12 22

Sample Output 1:
Sorted array: 12 22 25 34 64

Explanation:
- The array is sorted in ascending order after multiple passes.

---

Sample Input 2:
Enter the number of elements: 6
Enter the elements: 5 1 4 2 8 0

Sample Output 2:
Sorted array: 0 1 2 4 5 8

Explanation:
- The array is sorted step-by-step by comparing adjacent elements.

---

Notes:
1. Bubble Sort is a simple sorting algorithm, but it is not efficient for large datasets due to its quadratic time complexity.
2. The optimization (`swapped` flag) makes it faster for nearly sorted arrays by avoiding unnecessary passes.
3. Bubble Sort is stable, meaning it preserves the relative order of equal elements in the input array.
*/
