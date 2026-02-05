#include <stdio.h>

int main() {
    int n, val, i, k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    printf("k = %d\n", k);
    printf("Array after removal:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}