#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }

    int binary[32]; // массив для хранения двоичного числа
    int i = 0;

    if (decimal < 0) { // обработка отрицательных чисел
        decimal = -decimal;
        binary[i++] = 1; // добавление знака минуса в двоичное число
    }

    while (decimal > 0) {
        binary[i++] = decimal % 2; // получение остатка от деления на 2
        decimal /= 2; // деление на 2
    }

    for (int j = i-1; j >= 0; j--) { // вывод двоичного числа в обратном порядке
        printf("%d", binary[j]);
    }
}

int main() {
    int decimal;
    printf("Введите целое число: ");
    scanf("%d", &decimal);

    printf("Двоичное представление: ");
    decimalToBinary(decimal);

    return 0;
}