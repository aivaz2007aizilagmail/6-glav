#include <stdio.h>

int main() {

    int n;
    
    printf("Введите целое число: ");
    scanf("%d", &n);

    // Проверка что число положительное
    int is_positive = (n > 0);          
    
    // Проверка битового представления
    int is_power_of_two = (n & (n - 1)) == 0; 
    
    // Общий результат
    int result = is_positive && is_power_of_two; 

    // Вывод результата (1 - степень двойки, 0 - нет)
    printf("%d\n", result);

    return 0;
}
