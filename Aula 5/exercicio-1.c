#include <stdio.h>
#include <locale.h>

main(){
     int numero, i;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número desejado:");
    scanf("%d", &numero);

    for(i = numero; i >= 0; i--){
        printf("%d\n", i);
    }
}
