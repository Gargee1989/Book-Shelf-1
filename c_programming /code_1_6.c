#include<stdio.h>
int main(){
    int m;
    printf("Enter any month number: ");
    scanf("%d", &m);
    if (m == 2){
        printf("28 days.");
    } else if (m==4 || m==6 || m==9 || m==11) {
        printf("30 days.");
    } else {
        printf("31 days.");
    }
    return 0;
}

