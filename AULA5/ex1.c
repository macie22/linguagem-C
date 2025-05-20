#include <stdio.h>

float calcularAreaRetangulo( float base , float altura );

int main() {
    
    float base;
    float altura;

    printf("digite a base do retangulo: ");
    scanf("%f",&base);

    printf("digite qual sua altura: ");
    scanf("%f",&altura);

    float area = calcularAreaRetangulo(base, altura);
    
    printf("A area do retangulo e: %.2f\n", area);
    

    return 0;
}

float calcularAreaRetangulo( float base , float altura ){
    return base * altura;
}

