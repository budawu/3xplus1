#include <stdio.h>

int threexp1(int x) {
    while (x != 1) {
        x = x % 2 == 0 ? x / 2 : 3 * x + 1;
        printf("%d\n", x);
    }
    printf("OK\n");
    return 0;
}

int main() {
    return threexp1(27);
}
