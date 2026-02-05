#include <stdio.h>

int main() {
    int p, q;

    printf("Enter number of entries in server 1: ");
    scanf("%d", &p);

    int s1[p];
    printf("Enter sorted arrival times of server 1:\n");
    for (int i = 0; i < p; i++) {
        scanf("%d", &s1[i]);
    }

    printf("Enter number of entries in server 2: ");
    scanf("%d", &q);

    int s2[q];
    printf("Enter sorted arrival times of server 2:\n");
    for (int i = 0; i < q; i++) {
        scanf("%d", &s2[i]);
    }

    int result[p + q];
    int i = 0, j = 0, k = 0;

    while (i < p && j < q) {
        if (s1[i] < s2[j])
            result[k++] = s1[i++];
        else
            result[k++] = s2[j++];
    }

    while (i < p)
        result[k++] = s1[i++];

    while (j < q)
        result[k++] = s2[j++];

    printf("Merged Arrival Log:\n");
    for (i = 0; i < p + q; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}