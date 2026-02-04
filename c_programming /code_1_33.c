#include <stdio.h>

int b2o() {
    int binary, decimal = 0, base = 1, remainder;
    int octal = 0, octal_base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    while (decimal > 0) {
        remainder = decimal % 8;
        octal += remainder * octal_base;
        decimal /= 8;
        octal_base *= 10;
    }
    printf("Octal equivalent: %d\n", octal);
    return 0;
}

int o2b() {
    int octal, decimal = 0, base = 1, remainder;
    int binary = 0, binary_base = 1;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    while (octal > 0) {
        remainder = octal % 10;
        decimal += remainder * base;
        octal /= 10;
        base *= 8;
    }
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * binary_base;
        decimal /= 2;
        binary_base *= 10;
    }
    printf("Binary equivalent: %d\n", binary);
    return 0;
}

int main(){
    int a;
    printf("Choose 1 to convert Binary to Octal\n");
    printf("Choose 2 to convert Octal to Binary\n");
    printf("Your choice: ");
    scanf("%d",&a);
    if(a==1){
        b2o();
    } else if (a==2){
        o2b();
    } else {
        printf("Enter either 1 or 2!");
    }
    return 0;
}
