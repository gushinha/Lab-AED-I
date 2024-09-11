main()
{
#include <stdio.h>
#include <locale.h>

int numero;
setlocale(LC_ALL, "Portuguese");

printf("Digite um número:");
scanf("%d",& numero);

if (numero % 2 == 0)
{
    printf("O número é par.");
}
else
{
    printf("O  número é ímpar.");
}
}