#include <stdio.h>
#include <locale.h>

#define N_ESTUDANTES 5

typedef struct{
    char nome[25];
    int registroAcademico, periodo;
} estudante;

main(){
    estudante estudantes[5], veterano;
    int i, calouros = 0;

    for(i = 0; i < N_ESTUDANTES; i++){
        printf("Digite o nome do %dº estudante: \n", i+1);
        scanf("%s", &estudantes[i].nome);
        getchar();
        printf("Digite o RA(Registro Acadêmico) do %dº estudante: \n", i+1);
        scanf("%d", &estudantes[i].registroAcademico);
        getchar();
        printf("Digite o período no qual o %dº estudante está matriculado: \n", i+1);
        scanf("%d", &estudantes[i].periodo);
        getchar();
    }
    for(i = 0; i < N_ESTUDANTES; i++){
        if(estudantes[i].periodo <= 2){
            calouros ++;
        }
    }
    veterano = estudantes[0];
    for(i = 1; i < N_ESTUDANTES; i++){
        if(estudantes[i].periodo > veterano.periodo){
            veterano = estudantes[i];
        }
    }

    printf("Existem %d calouros. \n", calouros);
    printf("O estudante que está mais avançado é: %s", veterano.nome);
}