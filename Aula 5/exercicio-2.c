#include <stdio.h>
#include <locale.h>

main(){
    int qtdnumeros, i, n, soma;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite quantos n�meros deseja digitar:\n");
    scanf("%d", & qtdnumeros);
    i = 1;
    soma = 0;
    while(i <= qtdnumeros){
        printf("Digite o %d� numero:\n", i);
        scanf("%d", & n);

        soma = soma + n;

        i++;
    }
    printf("A soma total dos %d n�meros � de: %d.", qtdnumeros, soma);
}
