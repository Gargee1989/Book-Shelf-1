#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a!=b && b!=c && c!=a){
        printf("Given triangle is scalene.");
    } else if (a==b && b==c && c==a){
        printf("Given triangle is equilateral.");
    } else {
        printf("Given triangle is isosceles.");
    }
    return 0;
}
