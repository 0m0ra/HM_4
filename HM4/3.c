#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length = 8 + rand() % 7; // случайная длина от 8 до 14 символов
    char password[length+1]; // массив для хранения пароля
    int count[4] = {0, 0, 0, 0}; // массив для подсчета количества символов каждого класса

    srand(time(NULL)); // инициализация генератора случайных чисел

    printf("Сгенерированный пароль: ");

    for (int i = 0; i < length; i++) {
        int symbol_class = rand() % 4; // случайный выбор класса символов
        char symbol;

        switch (symbol_class) {
            case 0: // большие буквы
                symbol = 'A' + rand() % 26;
                count[0]++;
                break;
            case 1: // маленькие буквы
                symbol = 'a' + rand() % 26;
                count[1]++;
                break;
            case 2: // цифры
                symbol = '0' + rand() % 10;
                count[2]++;
                break;
            case 3: // прочие символы
                symbol = '!' + rand() % 94;
                count[3]++;
                break;
        }

        password[i] = symbol; // добавление символа в пароль
        printf("%c", symbol);
    }

    password[length] = '\0'; // добавление нулевого символа в конец строки

    // проверка наличия символов каждого класса
    int classes_count = 0;
    for (int i = 0; i < 4; i++) {
        if (count[i] > 0) {
            classes_count++;
        }
    }

    if (classes_count >= 3) {
        printf("\nПароль удовлетворяет всем требованиям.");
    } else {
        printf("\nПароль не удовлетворяет требованиям по количеству классов символов.");
    }

    return 0;
} 