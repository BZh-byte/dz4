#include <stdio.h>
#include <locale.h>

#define _CRT_SECURE_NO_WARNINGS
int main() 
{
    
    SetConsoleOutputCP(65001);

    int A = 1;
    int B = 1;
    int C = 0;
    int D = 1;

    int on= A + B + C + D;

    if (on >= 3) {
        printf("Запись включена. Сработало датчиков: %d\n", on);
    }
    else {
        printf("Запись выключена. Сработало датчиков: %d\n", on);
    }

    return 0;
}