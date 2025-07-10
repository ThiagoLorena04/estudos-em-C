#include <stdio.h>

int main(void) {
    FILE *arq;
    double aux[3];
    int i;

    for(int i = 0; i < 3; i++){
        printf("Passe o valor de aux no = aux[%d]: ", i);
        scanf("%lf", &aux[i]);
    }

    arq = fopen("teste.bin", "w+b");  // abre para leitura e escrita em binário
    if (arq == NULL) {
        printf("Erro\n");
        return 1;
    }

    // Grava os valores no arquivo
    fwrite(aux, sizeof(double), 3, arq);
    fclose(arq);

    //reabrindo arquivo para leitura apenas
    arq = fopen("teste.bin", "rb");
    if (arq == NULL) {
        printf("Erro\n");
        return 1;
    }

    fread(aux, sizeof(double), 3, arq);

    //Vou imprimir os resultados colocados no arquivo
    for (i = 0; i < 3; i++) {
    printf("Número lido: %.1lf\n", aux[i]);
}

    fclose(arq);
    return 0;
}
