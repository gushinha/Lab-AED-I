#include <stdio.h>
#include <locale.h>

struct cachorro{
        char nome[50], raca[20], porte;
        int idade;
        float peso;
    }
main()
{
    struct cachorro cachorros[2];
    int i;
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < 2; i++){
        printf("Digite o nome do %d� cachorro: \n", i+1);
        scanf("%49s",&cachorros[i].nome);
        printf("Digite o ra�a do %d� cachorro: \n", i+1);
        scanf("%20s",&cachorros[i].raca);
        printf("Digite o idade do %d� cachorro: \n", i+1);
        scanf("%d",&cachorros[i].idade);
        printf("Digite o peso do %d� cachorro(em kg): \n", i+1);
        scanf("%2.3f",&cachorros[i].peso);
        printf("Digite o porte do %d� cachorro(P, M, G): \n", i+1);
        scanf("%c",&cachorros[i].porte);
    }
    printf("\n ============================================= \n");
    printf("\n Informa��es dos cachorros: \n");
    printf("\n ============================================= \n");
    for(i = 0; i < 2; i++){
        printf("Cachorro %d:\n", i + 1);
        printf("Nome: %s\n", cachorros[i].nome);
        printf("Ra�a: %s\n", cachorros[i].raca);
        printf("Porte: %c\n", cachorros[i].porte);
        printf("Idade: %d\n", cachorros[i].idade);
        printf("Peso: %.2f\n\n", cachorros[i].peso);
    }
}
