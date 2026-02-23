#include<stdio.h>
typedef struct point {
    int x,y,z;
} p1;
int main(){
    p1 p = {.y=0, .z=1, .x=2};
    printf("%d %d %d", p.x,p.y,p.z);
    return 0;
}
