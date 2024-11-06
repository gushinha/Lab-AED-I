#include <stdio.h>
#include <string.h>
#include <locale.h>

main(){
    int i;
    char palavra[50];

    printf("Digite a palavra desejada: \n");
    fgets(palavra, 50, stdin);
    //ou gets(palavra);
    //ou scanf("%s", &palavra);

    for (i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] == 'a')
        {
            palavra[i] = 'e';
        }
    }
    printf("%s", palavra);
}