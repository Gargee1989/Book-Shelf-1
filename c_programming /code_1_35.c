#include <stdio.h>

int d2o() {
    int decimal, octal = 0, base = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 8;
        octal += remainder * base;
        decimal /= 8;
        base *= 10;
    }

    printf("Octal equivalent: %d\n", octal);

    return 0;
}

int o2d() {
    int octal, decimal = 0, base = 1, remainder;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    while (octal > 0) {
        remainder = octal % 10;
        decimal += remainder * base;
        octal /= 10;
        base *= 8;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}

int main(){
    int a;
    printf("Choose 1 to convert Decimal to Octal\n");
    printf("Choose 2 to convert Octal to Decimal\n");
    printf("Your choice: ");
    scanf("%d",&a);
    if(a==1){
        d2o();
    } else if (a==2){
        o2d();
    } else {
        printf("Enter either 1 or 2!");
    }
    return 0;
}
