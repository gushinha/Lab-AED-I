#include <stdio.h>
#include <locale.h>

#define tamanho 20

main(){
    int i;
    float soma = 0, numeros[20];
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < tamanho; i++){
        printf("Digite um número:");
        scanf("%f", &numeros[i]);
        soma = soma + numeros[i];
    }
    printf("A soma dos %d números é de: %5.2f", tamanho, soma);
}