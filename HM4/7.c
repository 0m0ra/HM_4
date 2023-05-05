#include <stdio.h>

int main() {
    int n, i, count_pos = 0, count_neg = 0, count_zero = 0; //Объявляем переменные  типа int и инициализируем их нулями
    scanf("%d", &n);
    int arr[n]; //Объявляем массив
    for (i = 0; i < n; i++) { //Используем цикл for для считывания элементов массива из ввода и подсчета количества положительных, отрицательных и нулевых чисел
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            count_pos++;
        } else if (arr[i] < 0) {
            count_neg++;
        } else {
            count_zero++;
        }
    }
    printf("Количество положительных чисел в массиве: %d\n", count_pos);
    printf("Количество отрицательных чисел в массиве: %d\n", count_neg);
    printf("Количество нулей в массиве: %d\n", count_zero);
    return 0;
}