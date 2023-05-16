#include <stdio.h>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int x = 60;
    int y = 48;
    int result = gcd(x, y);
    printf("El MCD de %d y %d es %d\n", x, y, result);
    return 0;
}
