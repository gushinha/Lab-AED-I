#include <stdio.h>
#include <locale.h>
main()
{
    int nsala, capacicidade, talunos;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número da sala:");
    scanf("%d",& nsala);
    printf("Digite sua capacidade:");
    scanf("%d",& capacicidade);
    printf("Digite o número de alunos matriculados:");
    scanf("%d",& talunos);

    if (talunos >= capacicidade)
    {
        printf("A sala número %d, com capacdade de %d alunos e está com %d cadeiras ocupadas, está cheia ou excedeu sua capacidade.", nsala, capacicidade, talunos);
    }
    else
    {
        printf("A sala número %d, com capacdade de %d alunos e está com %d cadeiras ocupadas, tem lugares vagos.", nsala, capacicidade, talunos);
    }
}