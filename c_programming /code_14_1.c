#include <stdio.h>
int main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    first = num;
    printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);
    return 0;
}
