#include <stdio.h>

int main() {
    char linha[200];
    char aux;
  FILE *arq1;
  arq1 = fopen("teste.txt", "r");

  if(arq1 == NULL){
    printf("Erro em abrir o arquivo!");
    return 1;
  }

  fgets(linha, sizeof(linha), arq1);
  printf("O que está dentro do arquivo teste -> %s\n", linha);

  FILE *f = fopen("teste.txt", "r");
  while(fscanf(f, "%c", &aux) != EOF)
    printf("\nAqui é usando o while: %c", aux);

  fclose(f);
  fclose(arq1);
}