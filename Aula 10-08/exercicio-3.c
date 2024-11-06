#include <stdio.h>
#include <locale.h>

#define tamanho 15
main(){
    int i, maior, menor, vetor[15];
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < tamanho; i++){
        printf("Digite um número:");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 1; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("O maior número digitado foi %d e o menor foi %d .", maior, menor);
}