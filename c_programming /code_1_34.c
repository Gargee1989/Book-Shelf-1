#include <stdio.h>
#include <string.h>

int b2h() {
    int binary, decimal = 0, base = 1, remainder;
    char hexadecimal[20];
    int index = 0;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    while (decimal > 0) {
        remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[index] = 48 + remainder;  
        else
            hexadecimal[index] = 55 + remainder; 
        decimal /= 16;
        index++;
    }
    printf("Hexadecimal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
    return 0;
}


int h2b() {
    char hex[20];
    int decimal = 0, base = 1, binary = 0, binary_base = 1, remainder;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    int length = strlen(hex);
    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9')
            decimal += (hex[i] - 48) * base;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            decimal += (hex[i] - 55) * base;
        base *= 16;
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
    printf("Choose 1 to convert Binary to Hexadecimal\n");
    printf("Choose 2 to convert Hexadecimal to Binary\n");
    printf("Your choice: ");
    scanf("%d",&a);
    if(a==1){
        b2h();
    } else if (a==2){
        h2b();
    } else {
        printf("Enter either 1 or 2!");
    }
    return 0;
}
