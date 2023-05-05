#include <stdio.h>

int main() {
    int month, year, days;

    printf("укажите номер месяца (1-12): ");
    scanf("%d", &month);

    printf("напишите год: ");
    scanf("%d", &year);
//Используем оператор switch для определения количества дней в месяце в зависимости от его номера
    switch(month) {
        case 1:
            days = 31;
            break;
        case 2: // Если месяц февраль, то количество дней зависит от года (28 или 29 в високосный год)
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
            //Если введен некорректный номер месяца, выводим сообщение об ошибке и завершаем программу
        default:
            printf("нет такого месяца");
            return 0;
    }

    printf("столько дней в месяце %d в этом году %d  %d", month, year, days);

    return 0;
}