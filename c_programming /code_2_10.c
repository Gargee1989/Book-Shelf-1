#include <stdio.h>
int main() {
    int row1, col1, row2, col2, i, j, k;
    int mat1[10][10], mat2[10][10], product[10][10];
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &row2, &col2);
    if (col1 != row2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            product[i][j] = 0;
            for (k = 0; k < col1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of the two matrices:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
