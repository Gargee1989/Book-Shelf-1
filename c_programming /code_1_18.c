#include <stdio.h>
int main() {
    int num, digit, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    int ori = num;
    printf("Digit frequency:\n");
    for (int i = 0; i <= 9; i++) {  
        num = ori;
        count = 0;  
        while (num != 0) {
            digit = num % 10;
            if (digit == i)
                count++;
            num /= 10;
        }
        if (count != 0){
            printf("Digit %d: %d times\n", i, count);
        }
    }
    return 0;
}
