#include <stdio.h>
#include <locale.h>

#define tamanho 10

main(){
    int i, numeros[10];
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < tamanho; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }
    printf("Os número digitados foram: \n");
    for(i = 0; i < tamanho; i++){
        printf("%d \n", numeros[i]);
    }
}