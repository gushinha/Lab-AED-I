main()
{
#include <stdio.h>
#include <locale.h>

int qtdLata, qtdGarrafinha, qtdGarrafa; 
float qtdTotal;
setlocale(LC_ALL, "Portuguese");

printf("Quantas latas de 350ml?");
scanf("%d",& qtdLata);
printf("Quantas garrafas de 600ml?");
scanf("%d",& qtdGarrafinha);
printf("Quantas garrafas de 2L?");
scanf("%d",& qtdGarrafa);

qtdTotal = (0.35 * qtdLata) + (0.6 * qtdGarrafinha) + (2 * qtdGarrafa);

printf(" Você comprou %d latas de 350ml, %d garrafas de 600ml e %d de garrafas de 2L, totalizando então em %f L.", qtdLata, qtdGarrafinha, qtdGarrafa, qtdTotal);
}