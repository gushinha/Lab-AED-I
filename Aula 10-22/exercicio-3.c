#include <stdio.h>
#include <locale.h>

#define LINHAS 4
#define COLUNAS 4
main(){
    int matriz[4][4], i, j, impares = 0, pares = 0, diagonal[4];
    setlocale(LC_ALL, "Portuguese");

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; i++)
        {
            printf("Digite o valor da posição %d x %d:", LINHAS, COLUNAS);
            scanf("%d", matriz[i][j]);
        }
    }
   
   for (i = 0; i < LINHAS; i++)
   {
        for (i = 0; i < COLUNAS; i++)
        {
            if (i == j)
            {
                diagonal[i] = matriz[i][j];
            }
        }
   }
   
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                pares ++;
            }
            else
            {
                impares ++;
            }
        }
        
    }
    
    printf(opç)
}