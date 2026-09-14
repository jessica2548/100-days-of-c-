#include <stdio.h>

int main() {
    int n, original, temp, digit, sum = 0;

    scanf("%d", &n);
    original = n;
    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
