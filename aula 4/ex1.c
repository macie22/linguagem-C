#include <stdio.h>
int main () {

    int valorInicial, valorFinal;
    
    printf("Informe o valor inicial: ");
    scanf("%d", &valorInicial);

    printf("informe o valor final: ");
    scanf("%d", &valorFinal);

    for ( int contador = valorInicial; contador <= valorFinal  ; contador++) {
        

        printf("%d ", contador);
       
    }


    return 0;
}