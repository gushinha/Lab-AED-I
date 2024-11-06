#include <stdio.h>
#include <locale.h>

main()
{
    int idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a idade do atleta:");
    scanf("%d", & idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("O atleta pertence a categoria INFANTIL A.");
    }
    if (idade > 7 && idade <= 10){
        printf("O atleta pertence a categoria INFANTIL B.");
    }
    if (idade > 10 && idade <=13)
    {
        printf("O atleta pertence a categoria JUVENIL A.");
    }
    if (idade > 13 && idade <=17)
    {
        printf("O atleta pertence a categoria JUVENIL B");
    }
    if (idade >= 18)
    {
        printf("O atleta pertence a categoria SENIOR");
    }
    else{
        printf("A idade é inválida.");
    }
}
