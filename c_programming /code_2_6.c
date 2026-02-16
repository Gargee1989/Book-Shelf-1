#include <stdio.h>
#include <string.h>

#define MAX_SIZE 200

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];
    printf("Enter first string: ");
    scanf("%[^\n]", str1);   
    getchar(); 
    printf("Enter second string: ");
    scanf("%[^\n]", str2);
    strcat(str1, str2);    
    printf("Concatenated string: %s\n", str1);
    return 0;
}
