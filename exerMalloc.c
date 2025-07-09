

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int i, n;
  int *v1, *v2;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  v1 = malloc(n * sizeof(int));
  v2 = malloc(n * sizeof(int));

  printf("Leitura do vetor 1:\n");
  for(i = 0; i < n; i++){
  printf("v1[%d] = ", i);
  scanf("%d", &v1[i]);
}

  printf("Leitura do vetor 2:\n");
  for(i = 0; i < n; i++){
  printf("v2[%d] = ", i);
  scanf("%d", &v2[i]);
}

printf("Soma dos vetores é: \n");
for(i = 0; i < n; i++){
    printf("v1[%d] + v2[%d] = %d\n", i, i, v1[i] + v2[i]);
}


    return 0;
}
