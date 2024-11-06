#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TAMANHO 1000

main(){
    int vetor[1000], maiores = 0, menores = 0, i;
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++)
    {
        vetor[i] = rand() % 100 + 1;
        if (vetor[i] < 50)
        {
            menores ++;
        }
        else if (vetor[i] > 50)
        {
            maiores ++;
        }
    }

     printf("Foram %d números maiores que 50 e %d números menores que 50.", maiores, menores);   
}