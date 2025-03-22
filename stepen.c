#include <stdio.h>

int main() {
    int n;
    printf("Введите целое число: ");
    scanf("%d", &n);
    int is_power_of_two = (n > 0) && ((n & (n - 1)) == 0);
    printf("%d\n", is_power_of_two);
    return 0;
}
