#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *arr, sum = 0.0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (float*)calloc(n, sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d floating point numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);

    return 0;
}


