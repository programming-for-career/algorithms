#include <stdio.h>

// Function: Perform Linear Search
// Purpose: Finds the index of a given element in an array using linear search.
// Parameters:
// - arr[]: The array to search in.
// - n: The size of the array.
// - x: The element to search for.
// Returns: The index of the element if found, or -1 if not found.
// Time Complexity: O(n) - where n is the number of elements in the array.
// Space Complexity: O(1) - constant space usage.

int linear_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {// Iterate through the array
        if (arr[i] == x) {       // Check if the current element matches the target
            return i;            // Return the index if found
        }
    }
    return -1; // Return -1 if the element is not found
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

    // Input: Prompt user for the element to search
    int x;
    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    // Perform the linear search and store the result
    int result = linear_search(arr, n, x);

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
Enter the number of elements: 5
Enter the elements: 1 2 3 4 5
Enter the element to be searched: 3

Sample Output 1:
Element found at index 2

Explanation:
- The element 3 is present at index 2 (0-based indexing).

---

Sample Input 2:
Enter the number of elements: 5
Enter the elements: 1 2 3 4 5
Enter the element to be searched: 6

Sample Output 2:
Element not found

Explanation:
- The element 6 is not present in the array.

---

Notes:
- Linear search is not the most efficient search algorithm for large datasets.
- Use this algorithm for small arrays or unsorted data when simplicity is preferred.
*/
