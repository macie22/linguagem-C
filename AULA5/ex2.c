#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mensagem(char nome[], int idade) {
    printf("Ola, %s voce tem %d anos. seja bem vindo(a)", nome , idade);
}
int main () {

    char nome[15];
    int idade;

    printf("qual seu nome");
    scanf("%s", nome); 

    printf("qual sua idade");
    scanf("%d", &idade);

    mensagem(nome,idade);

    return 0; 
}




