#include <stdio.h>
#include <locale.h>

main(){
    int numeroJoao, iJoao = 0;
    setlocale(LC_ALL, "Portuguese");

    while(iJoao < 10){
        printf("Digite o n�mero:");
        scanf("%d", &numeroJoao);

        if(numeroJoao == 0){
            printf("O n�mero digitado � igual a zero. \n");
        }
        else if(numeroJoao > 0){
            printf("O n�mero digitado � maior que zero. \n");
        }
        else{
            printf("O n�mero digitado � menor do que zero. \n");
        }
        iJoao++;
    }
}
