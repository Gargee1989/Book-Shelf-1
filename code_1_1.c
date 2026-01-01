//code to check if entered character is in uppercase or lowercase

#include<stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if (a>='A' && a<='Z'){
        printf("Entered character is an uppercase character.");
    } else {
        printf("Entered character is a lowercase character.");
    }
    return 0;
}
