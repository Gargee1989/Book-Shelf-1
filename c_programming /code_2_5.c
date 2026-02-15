#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    char str[MAX_SIZE];
    int i = 0, words = 0;
    char prevChar = ' ';

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    while (str[i] != '\0') {
        if ((str[i] != ' ' && str[i] != '\t') &&
            (prevChar == ' ' || prevChar == '\t')) {
            words++;
        }
        prevChar = str[i];
        i++;
    }

    printf("Total number of words = %d\n", words);
    return 0;
}
