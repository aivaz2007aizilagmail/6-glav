#include <stdio.h>

int main() {
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);
    
    //0 - нечётное, 1 - чётное
    int is_even = (number % 2 == 0);
    
    printf("%d\n", is_even);

    return 0;
}
