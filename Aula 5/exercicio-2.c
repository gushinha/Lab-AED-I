#include <stdio.h>
#include <locale.h>

main(){
    int qtdnumeros, i, n, soma;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite quantos números deseja digitar:\n");
    scanf("%d", & qtdnumeros);
    i = 1;
    soma = 0;
    while(i <= qtdnumeros){
        printf("Digite o %dº numero:\n", i);
        scanf("%d", & n);

        soma = soma + n;

        i++;
    }
    printf("A soma total dos %d números é de: %d.", qtdnumeros, soma);
}
