#include <stdio.h>
#include <locale.h>

main(){
    int n, i;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número:");
    scanf("%d", & n);

    i=0;
    for(i = 0; i <= n; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
        i++;
    }
}
