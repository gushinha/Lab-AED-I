#include <stdio.h>
#include <locale.h>

main(){
    double opcao, n1, n2, resultado = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Escolha uma opção: \n");
    printf("1. Soma de 2 números; \n");
    printf("2. Diferença entre 2 números (maior pelo menor).\n");
    printf("3. Produto entre 2 números.\n");
    printf("4. Divisão entre 2 números (o denominador não pode ser zero).\n");
    scanf("%f", &opcao);

    if (opcao > 0 && opcao <=4)
    {
        if (opcao == 1)
        {
            printf("Digite o primeiro número:");
            scanf("%f", &n1);
            printf("Digite o segundo número:");
            scanf("%f", &n2);

            resultado = n1 + n2;

            printf("O resultado da soma de %f e %f é de %f.", n1, n2, resultado);
        }
        else if (opcao == 2)
        {
            printf("Digite o primeiro número:");
            scanf("%f", &n1);
            printf("Digite o segundo número:");
            scanf("%f", &n2);

            if (n1 >= n2)
            {
                resultado = n1 - n2;
                printf("O resultado da subtração de %f e %f é de %f.", n1, n2, resultado);
            }
            else
            {
                resultado = n2 - n1;
                printf("O resultado da subtração de %f e %f é de %f.", n2, n1, resultado);
            }
        }
        else if (opcao == 3)
        {
            printf("Digite o primeiro número:");
            scanf("%f", &n1);
            printf("Digite o segundo número:");
            scanf("%f", &n2);

            resultado = n1 * n2;

            printf("O resultado da multiplicação de %f e %f é de %f.", n1, n2, resultado);
        }
        else if(opcao == 4)
        {
            printf("Digite o primeiro número:");
            scanf("%f", &n1);
            printf("Digite o segundo número:");
            scanf("%f", &n2);

            resultado = n1 / n2;

            printf("O resultado da divisão de %f e %f é de %f.", n1, n2, resultado);
        }
    }
    else
    {
        printf("Opção inválida.");
    }
    
}