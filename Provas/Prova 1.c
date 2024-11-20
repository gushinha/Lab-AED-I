#include <stdio.h>
#include <locale.h>

main(){
    int numeroJoao, iJoao = 0;
    setlocale(LC_ALL, "Portuguese");

    while(iJoao < 10){
        printf("Digite o número:");
        scanf("%d", &numeroJoao);

        if(numeroJoao == 0){
            printf("O número digitado é igual a zero. \n");
        }
        else if(numeroJoao > 0){
            printf("O número digitado é maior que zero. \n");
        }
        else{
            printf("O número digitado é menor do que zero. \n");
        }
        iJoao++;
    }
}
