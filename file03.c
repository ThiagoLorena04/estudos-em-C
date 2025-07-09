#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char nomeArq[100];
    char aux;
    int size = 0;

    // Entrada do nome do arquivo
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    // Abrindo o arquivo para leitura e escrita ("r+")
    arq = fopen(nomeArq, "r+");
    if (arq == NULL) {
        printf("Arquivo inexistente!\n");
        return 1;
    }

    while (fscanf(arq, "%c", &aux) != EOF) {
        size++;
    }

    // Alocando espaço na memória para armazenar o conteúdo do arquivo
    char *texto = malloc((size + 1) * sizeof(char));
    if (texto == NULL) {
        printf("Erro de alocação de memória!\n");
        fclose(arq);
        return 1;
    }

    // Voltando o cursor do arquivo pro começo
    rewind(arq);

    // Lendo o conteúdo do arquivo e guardando no vetor "texto"
    int i = 0;
    while (fscanf(arq, "%c", &aux) != EOF) {
        texto[i] = aux;
        i++;
    }
    texto[i] = '\0'; // Finalizando a string

    // Exibindo o conteúdo original
    printf("\n--- Conteúdo original do arquivo ---\n%s\n", texto);

    // Modificando o conteúdo: trocando 'a' por 'A' -- Porém, meu arquivo disponível tem mais caracteres apenas um "a". Comentar este código.
    // i = 0;
    // while (texto[i] != '\0') {
    //     if (texto[i] == 'a') {
    //         texto[i] = 'A';
    //     }
    //     i++;
    // }

    // // Voltando o cursor pro começo do arquivo de novo
    // rewind(arq);

    // // Regravando o conteúdo modificado no arquivo
    // i = 0;
    // while (texto[i] != '\0') {
    //     fprintf(arq, "%c", texto[i]);
    //     i++;
    // }

    // Finalizando
    free(texto);
    fclose(arq);

    // printf("\nArquivo modificado com sucesso!\n");

    return 0;
}
