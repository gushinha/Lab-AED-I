#include <stdio.h>
#include <locale.h>
main()
{
    float celsius, fahrenheit;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a temperatura em graus Celsius:");
    scanf("%f",& celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em Fahrenheit é de %f graus.", fahrenheit);
}