#include <stdio.h>
#include <math.h>  // Necessário para usar a função sqrt()

main() {
    double num, resultado;

    // Entrada de um número
    printf("Digite um número: ");
    scanf("%lf", &num);

    // Verifica se o número é não-negativo, pois a raiz quadrada de um número negativo não é real
    if (num < 0) {
        printf("Erro: não é possível calcular a raiz quadrada de um número negativo.\n");
    } else {
        // Calcula a raiz quadrada
        resultado = sqrt(num);

        // Exibe o resultado
        printf("A raiz quadrada de %.2f é %.2f\n", num, resultado);
    }
}
