#include <stdio.h>
int main() {

    char nome[15];
    int idade;
    float altura;
    char genero;

    printf("Qual é seu nome:" );
    scanf("%s", nome);

    printf("qual sua idade:" );
    scanf("%d", &idade);

    printf("Qual a sua altura:" );
    scanf("%f", &altura);

    printf("Qual o seu gênero:" );
    scanf(" %c", &genero);

    printf("Bem-vindo(a), %s!\n", nome);
    printf("Seu perfil\n");
    printf("Nome: %s", nome);

    printf("Idade: %d", idade); 

    printf("Altura: %f", altura);
    
    printf("Genero: %c", genero);

    return 0;
}