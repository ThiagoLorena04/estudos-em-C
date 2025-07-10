#include <stdio.h>

int main(void) {
    FILE *arq;
    double aux = 2.5;
    double leitura;

    // abre o arquivo binário para leitura e escrita
    arq = fopen("teste.bin", "w+b");

    if (arq == NULL) {
        printf("Erro\n");
        return 1;
    }

    // escreve o conteúdo da variável aux no arquivo
    fwrite(&aux, sizeof(double), 1, arq);
    
    //Volta para o início do arq para poder ler
    rewind(arq);

    //Aqui eu vou ler o arquivo com fread. Na qual, vai aparecer o valor alocado.
    fread(&leitura, sizeof(double), 1, arq);

    // Mostrar o valor de dentro do arquivo
    printf("Valor de dentro do arquivo: %.1f\n", leitura);

    fclose(arq);  
    return 0;
}
