#include <stdio.h>

// Função que calcula a raiz quadrada usando o método de Newton
double raizQuadrada(double y) {
    if (y < 0) {
        printf("Erro: número negativo não possui raiz real.\n");
        return -1;
    }

    double x = y / 2.0;  // primeira aproximação

    for (int i = 0; i < 20; i++) {
        x = (x + y / x) / 2.0;
    }

    return x;
}

int main() {
    double numero;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    double resultado = raizQuadrada(numero);

    if (resultado != -1) {
        printf("A raiz quadrada aproximada de %.5lf é %.5lf\n", numero, resultado);
    }

    return 0;
}
