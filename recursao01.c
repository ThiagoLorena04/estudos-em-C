#include <stdio.h>

long fatr(long n) {
    long x, r;

    printf("Entrando em fatr(%ld)\n", n);

    if (n == 1) {
        printf("Caso base alcançado: fatr(1) = 1\n");
        return 1;
    } else {
        x = n - 1;
        r = fatr(x);  // chamada recursiva
        printf("Voltando de fatr(%ld): %ld * %ld = %ld\n", n, n, r, n * r);
        return n * r;
    }
}

int main() {
    int f;
    printf("Quer fatorial de qual número? ");
    scanf("%d", &f);
    long resultado = fatr(f);
    printf("\nResultado final: fatr(%d) = %ld\n", f, resultado);
    return 0;
}
