#include <stdio.h>
#include <math.h>

int b2d() {
    int binary, decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}

int d2b() {
    int decimal, binary = 0, base = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    printf("Binary equivalent: %d\n", binary);
    return 0;
}

int main(){
    int a;
    printf("Choose 1 to convert Binary to Decimal\n");
    printf("Choose 2 to convert Decimal to Binary\n");
    printf("Your choice: ");
    scanf("%d",&a);
    if (a==1){
        b2d();
    } else if (a==2) {
        d2b();
    } else {
        printf("Enter either 1 or 2!");
    }
    return 0;
}
