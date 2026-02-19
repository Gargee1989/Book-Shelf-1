#include <stdio.h>

int main() {
    int i, j, n;
    int matrix[10][10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements in the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The Lower Triangular Matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j)
                printf("0 ");
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
