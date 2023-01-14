#include <stdio.h>

void threexp1(int x) {
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
            printf("%d\n", x);
        } else {
            x = 3 * x + 1;
            printf("%d\n", x);
        }
    }
    printf("OK\n");
}

int main() {
    threexp1(27);
}
