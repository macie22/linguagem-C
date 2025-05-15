#include <stdio.h>
int main () {
   
    int N, soma = 0;

    printf("informe o valor de n: ");
    scanf("%d", &N);
    for (int contador = 1; contador <= N; contador++) {

        if(contador % 2 == 0) {
            soma = soma + contador;
        }  
    }
    printf("A soma dos números pares de 1 até %d é: %d", N, soma);

    return 0;
}   