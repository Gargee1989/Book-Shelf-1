#include <stdio.h>
#include <math.h>
int main() {
    int n, num, original, remainder, count;
    float result;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        num = i;
        original = num;
        count = 0;
        result = 0;
        while (original != 0) {
            original /= 10;
            count++;
        }
        original = num;
        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, count);
            original /= 10;
        }
        if ((int)result == num) 
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
