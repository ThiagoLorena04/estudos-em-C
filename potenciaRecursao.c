#include <stdio.h>

long pot(long x, long n) {
    double aux;

    if (n == 0)
        return 1;
    else if (n % 2 == 0) {  // se n for par
        aux = pot(x, n / 2);
        return aux * aux;
    } else {  // se n for ímpar
        aux = pot(x, (n - 1) / 2);
        return x * aux * aux;
    }
}

int main() {
    long base, expoente;

    printf("Digite a base: ");
    scanf("%ld", &base);

    printf("Digite o expoente: ");
    scanf("%ld", &expoente);

    long resultado = pot(base, expoente);
    printf("%ld elevado a %ld é igual a %ld\n", base, expoente, resultado);

    return 0;
}
