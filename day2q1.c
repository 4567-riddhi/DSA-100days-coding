#include <stdio.h>

int main() {
    int n, pos, i;

    // 1. Get the number of elements
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    // 2. Read n integers into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the 1-based position to delete
    scanf("%d", &pos);

    // Validate position (Optional but good practice)
    if (pos < 1 || pos > n) {
        // If position is invalid, print nothing or original array
        return 0;
    }

    /* 4. Shift elements to the left 
       We start at the index of 'pos' (which is pos-1) 
       and overwrite it with the next element. */
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // 5. Print the updated array with (n-1) elements
    for (i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
        if (i < n - 2) {
            printf(" "); // Print space between numbers
        }
    }

    return 0;
}