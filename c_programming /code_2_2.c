#include <stdio.h>
float average(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

int main() {
    float num1, num2, num3, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    avg = average(num1, num2, num3);
    printf("Average = %.2f\n", avg);
    return 0;
}
