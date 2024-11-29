#include <stdio.h>

// Function: Perform Binary Search
// Purpose: Finds the index of a given element in a sorted array using binary search.
// Parameters:
// - arr[]: The sorted array to search in.
// - low: The starting index of the array.
// - high: The ending index of the array.
// - x: The element to search for.
// Returns: The index of the element if found, or -1 if not found.
// Time Complexity: O(log n) - where n is the number of elements in the array.
// Space Complexity: O(1) - iterative implementation uses constant space.

int binary_search(int arr[], int low, int high, int x) {
    while (low <= high) { // Continue until the search range is valid
        int mid = low + (high - low) / 2; // Calculate the middle index

        if (arr[mid] == x) {
            return mid; // Element found, return the index
        } else if (arr[mid] < x) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
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
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Prompt user for the element to search
    int x;
    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    // Perform the binary search and store the result
    int result = binary_search(arr, 0, n - 1, x);

    // Output: Display whether the element was found or not
    if (result == -1) {
        printf("Element not found\n"); // Element is not in the array
    } else {
        printf("Element found at index %d\n", result); // Element found, display index
    }

    return 0;
}

/*
=====================
Sample Input/Output:
=====================

Sample Input 1:
Enter the number of elements: 6
Enter the elements in sorted order: 1 3 5 7 9 11
Enter the element to be searched: 5

Sample Output 1:
Element found at index 2

Explanation:
- The element 5 is present at index 2 (0-based indexing).

---

Sample Input 2:
Enter the number of elements: 6
Enter the elements in sorted order: 1 3 5 7 9 11
Enter the element to be searched: 6

Sample Output 2:
Element not found

Explanation:
- The element 6 is not present in the array.

---

Notes:
1. Binary search requires the array to be sorted. If the array is not sorted, sort it first (e.g., using quicksort or mergesort).
2. It is more efficient than linear search for large datasets due to its logarithmic time complexity.
3. Binary search is commonly used in searching algorithms, database indexing, and game development.

*/
