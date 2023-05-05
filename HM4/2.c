#include <stdio.h>

int main() {
    int n, k, i, j;
    printf("Введите номер дня недели первого числа месяца (1-7): ");
    scanf("%d", &n);
    printf("Введите количество дней в месяце (1-99): ");
    scanf("%d", &k);
    printf("\nПн Вт Ср Чт Пт Сб Вс\n");
    for (i = 1; i < n; i++) { //Используем цикл for для вывода пробелов перед первым числом месяца в зависимости от номера дня недели первого числа месяц
        printf("   ");
    }
    for (j = 1; j <= k; j++) { // Используем цикл for для вывода чисел месяца и переноса строки каждую неделю
        printf("%2d ", j);
        if ((j + n - 1) % 7 == 0 || j == k) {
            printf("\n");
        }
    }
    return 0;
}


