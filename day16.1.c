#include <stdio.h>

int main() {
    int n, binary = 0, place = 1, remainder;

    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }

    printf("%d", binary);

    return 0;
}
