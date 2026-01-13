#include<stdio.h>
int main(){
    int i=1, sumodd=0, sumeve=0, n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            sumodd=sumodd+i;
        } else {
            sumeve=sumeve+i;
        }
        i++;
    }
    printf("The sum of all odd numbers between 1 to %d is %d\n",n,sumodd);
    printf("The sum of all even numbers between 1 to %d is %d\n",n,sumeve);
    return 0;
}
