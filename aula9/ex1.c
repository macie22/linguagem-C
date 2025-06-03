#include <stdio.h>
#include <string.h>

int main()
{

    char palavra[16];
    int tamanho;

    printf("digite sua palavra: ");
    scanf("%15[^\n]", palavra);

    tamanho = strlen(palavra);

    /*  strcpy(tamanho, "Esta string é muito longa!");
    printf("tamanho: %s\n", tamanho); */
    printf("palavra: %s\n", palavra);
    printf("tamanho: %d\n", tamanho);

     if (tamanho > 15){
        printf("palavra longa\n");
    }
    else if (tamanho > 8 ) {
        printf("palavra media\n");
     }
    
    else if (tamanho > 5) {
        printf("palavra pequena");
    }
    
    return 0;
}