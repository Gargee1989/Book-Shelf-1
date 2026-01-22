#include <stdio.h>
int main() {
    printf("ASCII characters with values:\n");
    for (int i = 0; i < 128; i++) {
        printf("Character: %c, ASCII value: %d\n", i, i);
    }
    return 0;
}
