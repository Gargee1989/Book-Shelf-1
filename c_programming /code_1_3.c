//check if entered value is alphabet, number or special character

#include<stdio.h>
int main(){
    char a;
    printf("Enter any value: ");
    scanf("%c",&a);
    if ((a>='A' && a<='Z') || (a>='a' && a<='z')){
        printf("Entered value is an alphabet.");
    } else if (a>='0' && a<='9'){
        printf("Entered value is a digit.");
    } else {
        printf("Entered value is a special character.");
    }
    return 0;
}
