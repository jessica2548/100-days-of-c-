#include <stdio.h>

int main() {
    int seconds, h, m, s;

    scanf("%d", &seconds);

    h = seconds / 3600;
    seconds %= 3600;
    m = seconds / 60;
    s = seconds % 60;

    printf("%d:%d:%d", h, m, s);

    return 0;
}
