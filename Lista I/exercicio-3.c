#include <stdio.h>
#include <locale.h>

main(){
    int idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("Idade inválida.");
    }
    else if (idade >= 18 && idade <= 67)
    {
        printf("Você pode doar sangue.");
    }
    else
    {
        printf("Você não pode doar sangue.");
    }
    
}