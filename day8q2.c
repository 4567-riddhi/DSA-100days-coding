#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("False\n");
        return 0;
    }

    while (n % 2 == 0)
    {
        n = n / 2;
    }

    if (n == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}