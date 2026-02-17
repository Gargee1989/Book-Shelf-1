#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    int length = strlen(str); 
    printf("Length of the string = %d\n", length);

    return 0;
}
