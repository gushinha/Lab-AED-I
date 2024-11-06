#include <stdio.h>
#include <locale.h>

main()
{
    int idade;
    float nota;
    setlocale(LC_ALL, "Portuguese");

    printf("Qual sua idade?");
    scanf("%d", & idade);

    if (idade >= 18)
    {
        printf("Qual foi sua nota na prova?");
        scanf("%f", & nota);
        if (nota >= 60)
        {
            printf("Parabéns! Você está apto para tirar sua habilitação!");
        }
    }
    else{
        printf("Você não cumpre os requisitos para tirar a habilitação.");
    }
    
}
