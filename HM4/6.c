#include <stdio.h>

int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    int arr[n]; //Объявляем массив arr размера n
    for (i = 0; i < n; i++) { //Используем цикл for для считывания элементов массива из ввода и подсчета количества положительных чисел
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            count++;
        }
    }
    printf("Количество положительных чисел в массиве: %d\n", count);
    return 0;
}