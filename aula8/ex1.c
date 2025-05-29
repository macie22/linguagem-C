#include <stdio.h>

int main()
{

    int numeros[3][3], soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("digite um valor: ");
            scanf("%d", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma = numeros[i][j] + soma;
        }
    }
    printf("A soma de todos os valores da matriz é: %d\n", soma);
    return 0;
}