#include<stdio.h>
int main(){
    int sp,cp,profit,loss;
    printf("Enter the cost price and selling price of object: ");
    scanf("%d %d",&cp,&sp);
    if (sp>cp){
        profit = sp - cp;
        printf("The total profit is %d rupees.", profit);
    } else {
        loss = cp - sp;
        printf("The total loss is %d rupees.", loss);
    }
    return 0;
}
