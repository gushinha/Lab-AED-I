#include <stdio.h>
#include <locale.h>

typedef struct {
        char nome[50], raca[20], porte;
        int idade;
        float peso;
    } cachorro;
main()
{
    cachorro cachorros[2];
    int i;
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < 2; i++){
        printf("Digite o nome do %dº cachorro: \n", i+1);
        scanf("%49s",&cachorros[i].nome);
        getchar();
        printf("Digite o raça do %dº cachorro: \n", i+1);
        scanf("%20s",&cachorros[i].raca);
        getchar();
        printf("Digite o idade do %dº cachorro: \n", i+1);
        scanf("%d",&cachorros[i].idade);
        getchar();
        printf("Digite o peso do %dº cachorro(em kg): \n", i+1);
        scanf("%2.3f",&cachorros[i].peso);
        getchar();
        printf("Digite o porte do %dº cachorro(P, M, G): \n", i+1);
        scanf("%c",&cachorros[i].porte);
        getchar();
    }
    printf("\n ============================================= \n");
    printf("\n Informações dos cachorros: \n");
    printf("\n ============================================= \n");
    for(i = 0; i < 2; i++){
        printf("Cachorro %d:\n", i + 1);
        printf("Nome: %s\n", cachorros[i].nome);
        printf("Raça: %s\n", cachorros[i].raca);
        printf("Porte: %c\n", cachorros[i].porte);
        printf("Idade: %d\n", cachorros[i].idade);
        printf("Peso: %.3f\n\n", cachorros[i].peso);
    }
}
