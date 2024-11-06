#include <stdio.h>
#include <locale.h>

main()
{
   float salarioAtual, salarioFinal;
   setlocale(LC_ALL, "Portuguese");

   printf("Digite o salário:");
   scanf("%f",&salarioAtual);

   if (salarioAtual <= 200 && salarioAtual > 0)
   {
    salarioFinal = salarioAtual * 1.13;
    salarioFinal = salarioAtual + (salarioAtual * 0.13);
   }
   else if (salarioAtual > 200 && salarioAtual <= 400)
   {
    salarioFinal = salarioAtual * 1.11;
   }
   else if (salarioAtual > 400 && salarioAtual <= 800)
   {
    salarioFinal = salarioAtual * 1.09;
   }
   else if (salarioAtual > 800)
   {
    salarioFinal = salarioAtual * 1.07; 
   }
   else
   {
    printf("Valor inválido.");
   }
   
   printf("O novo salário do funcionário é de: R$ %f", salarioFinal);
}
