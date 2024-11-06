#include <stdio.h>
#include <locale.h>

    main()
{
    float nota1, nota2, media;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a primeira nota do aluno:");
    scanf("%f", & nota1);
    if(nota1 >= 0 && nota1 <= 10){
        printf("A primeira nota é válida.");
        printf("Digite a segunda nota do aluno:");
        scanf("%f", & nota2);
        if (nota2 >= 0 && nota2 <= 10)
        {
            printf("A segunda nota é válida.");
            media = (nota1 + nota2)/2;
            printf("A média do aluno foi de: %f", media);
        }
    }
    else{
        printf("As notas são invalidas.");
    }
}