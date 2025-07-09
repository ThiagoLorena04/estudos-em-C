#include <stdio.h>

int main() {
    FILE *arq;
    char aux, nomeArq[100];

    printf("Entre com nome do arquivo: ");
    scanf("%s", nomeArq);

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo");
    } else {
        printf("------ Dados do arquivo:\n\n");
        while (fscanf(arq, "%c", &aux) != EOF) {
            printf("%c", aux);
        }
    }

    fclose(arq);
    return 0;
}
