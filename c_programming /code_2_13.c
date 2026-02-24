#include <stdio.h>

struct S {
    int a;
    char b;
};

int main() {
    printf("%zu\n", sizeof(struct S));  
    return 0;
}
