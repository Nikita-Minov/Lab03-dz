#include <stdio.h>
#include <locale.h>

void main(void)
{
    int lightYears;
    double astronomicalUnits;
    setlocale(LC_ALL, "RUS");
    printf("Введите количество световых лет(целое число):\n");
    scanf("%d", &lightYears);
    astronomicalUnits = lightYears * 63241.1;
    printf("%d световых лет(года) = %f астрономических единиц", lightYears, astronomicalUnits);
}