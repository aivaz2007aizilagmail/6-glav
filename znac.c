#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    int sign = (a > 0) - (a < 0);
    sign *= (b > 0) - (b < 0);
    sign *= (c > 0) - (c < 0);
    printf("%d\n", sign);
    return 0;
}
