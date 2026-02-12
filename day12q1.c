#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int symmetric = 1; 

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
        printf("Symmetric Matrix\n");
    else
        printf("Not a Symmetric Matrix\n");

    return 0;
}