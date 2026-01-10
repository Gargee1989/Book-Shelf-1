#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while (n>=1){
        printf("%d\n", n);
        n=n-1;
    }
    return 0;
}
