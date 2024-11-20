#include <stdio.h>
#include <locale.h>

#define N_FILMES  5

typedef struct{
    char joaoTitulo[30], joaoGenero[15];
    int joaoAno, joaoDuracao; 
}joaoFilme;
main(){
    joaoFilme joaoFilmes[5];
    joaoFilme joaoLongos[5]; 
    joaoFilme joaoMAntigo;
    int i, j, joaoAntigos = 0;
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < N_FILMES; i++){
        printf("Digite o título do %dº filme: \n", i+1);
        scanf("%s", &joaoFilmes[i].joaoTitulo);
        getchar();
        fflush(stdin);
        printf("Digite o gênero do %dº filme : \n", i+1);
        scanf("%s", &joaoFilmes[i].joaoGenero);
        getchar();
        fflush(stdin);
        printf("Digite o ano de lançamento do %dº filme: \n", i+1);
        scanf("%d", &joaoFilmes[i].joaoAno);
        getchar();
        fflush(stdin);
        printf("Digite a duração(em minutos) do %dº filme: \n", i+1);
        scanf("%d", &joaoFilmes[i].joaoDuracao);
        getchar();
        fflush(stdin); 
        printf("======================================================= \n");
    }

    for(i = 0; i < N_FILMES; i++){
        printf("Título: %s \n", joaoFilmes[i].joaoTitulo);
        printf("Gênero: %s \n", joaoFilmes[i].joaoGenero);
        printf("Ano de lançamento: %d  \n", joaoFilmes[i].joaoAno); 
        printf("Duração(em min): %d  \n", joaoFilmes[i].joaoDuracao);
        printf("==================================\n");
        if(2024 - joaoFilmes[i].joaoAno >= 10){
            joaoAntigos ++;
        }
    }

    joaoMAntigo = joaoFilmes[0];
    for(i = 1; i < N_FILMES; i++){
        if(joaoMAntigo.joaoAno > joaoFilmes[i].joaoAno){
            joaoMAntigo = joaoFilmes[i];
        }
    }
    
    for(i = 0; i < N_FILMES; i++){
        if(joaoFilmes[i].joaoDuracao <= 120){
        printf("Filme longo(+2h):  %s \n", joaoFilmes[i].joaoTitulo);
        }
    }
    printf("Quantidade de filmes antigos(+10 anos):  %i \n", joaoAntigos);
    printf("O filme mais antigo é: %s \n", joaoMAntigo.joaoTitulo);
}