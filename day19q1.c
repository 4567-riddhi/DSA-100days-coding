#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;
    int min_sum = arr[left] + arr[right];
    int num1 = arr[left], num2 = arr[right];

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(abs(sum) < abs(min_sum)) {
            min_sum = sum;
            num1 = arr[left];
            num2 = arr[right];
        }

        if(sum < 0)
            left++;
        else
            right--;
    }

    printf("Pair whose sum is closest to zero: %d %d\n", num1, num2);

    return 0;
}