#include <stdio.h> 
int main() {
    
    float n1;
    float n2;
    int operaçao;

    printf("informe qual o primeiro numero ");
    scanf("%f", &n1);

    printf("informe qual o segundo numero");
    scanf("%f", &n2);

    printf("escolha sua operaçao:\n");
    printf("1-soma\n");
    printf("2-subtraçao\n");
    printf("3multiplicaçao\n");
    printf("4default");

    switch (operaçao)
    {
    case 1:
        printf("Resultado da soma %.2f\n", n1 + n2);
        break;

    case 2:

        printf("Resultado da subtraçao %.2f\n", n1 - n2 );
        
        /* code */
        break;
    case 3 :
        printf("Resultado da multiplicaçao %.2f\n", n1 )
    default:
        break;
    }
}