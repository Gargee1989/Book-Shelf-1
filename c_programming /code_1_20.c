#include <stdio.h>
void main() {
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    printf("Result: %d\n", result);
}
