#include <stdio.h>

int main() {
    int number;
    printf("Введите целое число: ");
    scanf("%d", &number);
    int is_even = (number % 2 == 0);
    printf("Число %d является %s\n", number, is_even ? "четным" : "нечетным");
    return 0;
}
