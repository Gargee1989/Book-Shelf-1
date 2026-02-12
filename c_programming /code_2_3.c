#include <stdio.h>
float add(float *a, float *b) { return *a + *b; }
float subtract(float *a, float *b) { return *a - *b; }
float multiply(float *a, float *b) { return *a * *b; }
float divide(float *a, float *b) { 
    if (*b == 0) {
        printf("Error: Division by zero.\n");
        return 0;
    }
    return *a / *b; 
}
typedef struct {
    char op;
    float (*operation)(float*, float*);
} Operation;
int main() {
    float num1, num2;
    float *ptr1 = &num1, *ptr2 = &num2;
    printf("Enter first number: ");
    scanf("%f", ptr1);
    printf("Enter second number: ");
    scanf("%f", ptr2);
    Operation operations[] = {
        {'+', add},
        {'-', subtract},
        {'*', multiply},
        {'/', divide}
    };
    char op;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    int found = 0;
    for (int i = 0; i < 4; i++) {
        if (operations[i].op == op) {
            float result = operations[i].operation(ptr1, ptr2);
            printf("Result: %.2f\n", result);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Invalid operator.\n");
    }
    return 0;
}
