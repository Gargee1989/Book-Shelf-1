#include<stdio.h>
int main(){
    int i=1, n, op;
    do{
        printf("Enter the number you want to print the table for: ");
        scanf("%d",&n);
        for (i; i<=10; i++){
            printf("%d x %d = %d\n", n, i, i*n);
        }
        printf("Do you want to continue? (1/0) ");
        scanf("%d",&op);
    } while (op==1);
    return 0;
}
