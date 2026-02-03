#include <stdio.h>

int main()
{
    int n, key, i;
    int arr[100];
    int comparisons = 0;
    int found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        comparisons++;
        if(arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not Found\n");

    printf("Comparisons = %d\n", comparisons);

    return 0;
}