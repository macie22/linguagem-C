#include <stdio.h>

int main () {

    int numeros[10], soma = 0;

    for (int i = 0; i < 10; i++) {
        int numero; 
        
        printf("digite um numero: ");
        scanf("%d", &numero);

        numeros[i] = numero;
    }

  
    for (int i = 0; i < 10; i++) {
     soma = soma + numeros[i];   
    }

    printf("a soma e %d\n", soma);

    return 0;
}