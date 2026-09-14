#include <stdio.h>

int main() {
    int n, first, last, middle, power = 1, result;

    scanf("%d", &n);

    if (n < 10) {
        printf("%d", n);
        return 0;
    }

    last = n % 10;
    first = n;

    while (first >= 10)
        first /= 10;

    while (power <= n / 10)
        power *= 10;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
