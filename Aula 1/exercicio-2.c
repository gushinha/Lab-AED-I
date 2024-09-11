main()
{
#include <stdio.h>
#include <locale.h>

int nascimento, ano, idade;
setlocale(LC_ALL, "Portuguese");

printf("Digite o ano em que você nasceu:");
scanf("%d",& nascimento);

printf("Digite o ano em que estamos:");
scanf("%d",& ano);

idade = nascimento - ano;

printf("Você tem %d anos.",idade);
}