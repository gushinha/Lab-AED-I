//
//  exercicio-1.c
//  
//
//  Created by João Augusto Batsta Pereira on 03/09/24.
//
#include <stdio.h>
#include <locale.h>
main()
{
    int ano, idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o ano em que você nasceu:");
    scanf("%d",& ano);

    idade = 2024 - ano;

    printf("Você tem %d anos.",idade);
}


