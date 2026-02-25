#include <stdio.h>
int str_length(char *str) {
    char *p = str;
    while (*p != '\0') {
        p++;
    }
    return p - str;
}
void main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str); 
    printf("Length of the string: %d\n", str_length(str));
}
