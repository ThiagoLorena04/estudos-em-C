#include <stdio.h>

int fibonacci (int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2); // Aqui faço a chamada recursiva que só Deus entende. (Acho que entendi, sou Deus?)
}

int main (){
    int n;
    printf("Digite seu termo de Fibonacci que queres ver: ");
    scanf("%d", &n);

    printf("Fibonacci de %d = %d", n, fibonacci(n));
    return 0;
}