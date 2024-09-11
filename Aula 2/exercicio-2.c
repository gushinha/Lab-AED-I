main()
{
#include <stdio.h>
#include <locale.h>

float salarioI, salarioA, salarioF;
setlocale(LC_ALL, "Portuguese");

printf("Digite o salário do trabalhador:");
scanf("%f",& salarioI);

salarioA = salarioI * 1,15;
salarioF = salarioA * 0,92;

printf("Com base no salário inicial de R$%f, o salário bruto com aumento de 15\% passou para R$%f e após o desconto de 8\% tornou-se R$%f.", salarioI, salarioA, salarioF);

}