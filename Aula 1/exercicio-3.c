main()
{
#include <stdio.h>
#include <locale.h>

int lado, area;
setlocale(LC_ALL, "Portuguese");

printf("Digite o comprimento do lado do quadrado: \n");
scanf("%d",& lado);

area = lado ^ 2;

printf("A área do quadrado é de: %d", area);
}