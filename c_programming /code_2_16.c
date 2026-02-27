#include <stdio.h>
#define PI 3.14159
typedef struct {
    double radius;
} Circle;
double area(Circle c) {
    return PI * c.radius * c.radius;
}
double perimeter(Circle c) {
    return 2 * PI * c.radius;
}
int main() {
    Circle c1, c2;   
    printf("Enter radius for circle 1: ");
    scanf("%lf", &c1.radius);
    printf("Enter radius for circle 2: ");
    scanf("%lf", &c2.radius);
    printf("Circle 1 - Area: %.2lf\n", area(c1));
    printf("Circle 1 - Perimeter: %.2lf\n", perimeter(c1));
    printf("Circle 2 - Area: %.2lf\n", area(c2));
    printf("Circle 2 - Perimeter: %.2lf\n", perimeter(c2));
    return 0;
}
