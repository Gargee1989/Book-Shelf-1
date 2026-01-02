//check vowel or consonant

#include<stdio.h>
int main(){
    char c;
    int uppvow, lowvow;
    printf("Enter any character: ");
    scanf("%c",&c);
    uppvow = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    lowvow = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (uppvow || lowvow ){
        printf("Entered value is a vowel.");
    } else {
        printf("Entered value is a consonant.");
    }
    return 0;
}
