#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float real;
    float imag;
} Complexo;

Complexo* criarComplexo(float real, float imag) {
    Complexo* c = (Complexo*) malloc(sizeof(Complexo));
    if (c != NULL) {
        c->real = real;
        c->imag = imag;
    }
    return c;
}

void destruirComplexo(Complexo* c) {
    free(c);
}

Complexo* somarComplexos(Complexo* z1, Complexo* z2) {
    Complexo* r = (Complexo*) malloc(sizeof(Complexo));
    if (r != NULL) {
        r->real = z1->real + z2->real;
        r->imag = z1->imag + z2->imag;
    }
    return r;
}

Complexo* subtrairComplexos(Complexo* z1, Complexo* z2) {
    Complexo* r = (Complexo*) malloc(sizeof(Complexo));
    if (r != NULL) {
        r->real = z1->real - z2->real;
        r->imag = z1->imag - z2->imag;
    }
    return r;
}

Complexo* multiplicarComplexos(Complexo* z1, Complexo* z2) {
    Complexo* r = (Complexo*) malloc(sizeof(Complexo));
    if (r != NULL) {
        r->real = z1->real * z2->real - z1->imag * z2->imag;
        r->imag = z1->real * z2->imag + z1->imag * z2->real;
    }
    return r;
}

Complexo* dividirComplexos(Complexo* z1, Complexo* z2) {
    Complexo* r = (Complexo*) malloc(sizeof(Complexo));
    if (r != NULL) {
        float divisor = z2->real * z2->real + z2->imag * z2->imag;
        if (divisor != 0) {
            r->real = (z1->real * z2->real + z1->imag * z2->imag) / divisor;
            r->imag = (z1->imag * z2->real - z1->real * z2->imag) / divisor;
        } else {
            printf("Erro: divisão por zero!\n");
            free(r);
            return NULL;
        }
    }
    return r;
}

int main() {
    Complexo *z1 = criarComplexo(4, 3);
    Complexo *z2 = criarComplexo(2, 1);

    Complexo *soma = somarComplexos(z1, z2);
    Complexo *sub  = subtrairComplexos(z1, z2);
    Complexo *mult = multiplicarComplexos(z1, z2);
    Complexo *div  = dividirComplexos(z1, z2);

    printf("Soma: %.2f + %.2fi\n", soma->real, soma->imag);
    printf("Subtração: %.2f + %.2fi\n", sub->real, sub->imag);
    printf("Multiplicação: %.2f + %.2fi\n", mult->real, mult->imag);
    if (div != NULL)
        printf("Divisão: %.2f + %.2fi\n", div->real, div->imag);

    destruirComplexo(z1);
    destruirComplexo(z2);
    destruirComplexo(soma);
    destruirComplexo(sub);
    destruirComplexo(mult);
    destruirComplexo(div);

    return 0;
}


/* Não consegui identificar se acertei de forma precisa este código.*/