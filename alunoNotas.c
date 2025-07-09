#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float calcularMedia(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}


int numAlunos(){
    int alunos;
    printf("Quantos alunos temos na sala?: ");
    scanf("%d", &alunos);
    return alunos;
}

void notas(int totalAlunos){
    float n1, n2, n3, media;

  for(int i = 1; i <= totalAlunos; i++){

    printf("\nAluno %d: \n", i);

    printf("Qual foi a nota da P1 do aluno %d?: ", i);
    scanf("%f",&n1);

    printf("Qual foi a nota da P2 do aluno %d?: ", i);
    scanf("%f",&n2);

    printf("Qual foi a nota da P3 do aluno %d?: ", i);
    scanf("%f",&n3);

    media = calcularMedia(n1, n2, n3);
    printf("A média do aluno %d foi de: %.2f\n", i, media);

    if( media >= 6){
        printf("O aluno %d foi APROVADO!",  i);
    } else{
        printf("O aluno %d foi REPROVADO!",  i);

    }
}
}


int main() {

    setlocale(LC_ALL, "Portuguese");


    int alunos = numAlunos();
    notas(alunos);


    return 0;
}