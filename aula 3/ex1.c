#include <stdio.h>
    int main () {

        int anoAtual;
        int anoNascimento;
        int idade;


        printf("Qual ano voce nasceu ? ");
        scanf("%d", &anoNascimento);
        
        printf("Qual o no atual ? ");
        scanf("%d", &anoAtual);

        idade = anoAtual - anoNascimento;

        if (idade >= 18) {
            printf("voce tem %d anos em %d e podera tirar a habilitação.", idade, anoAtual);
        }
        
        else {
            printf("voce tem %d anos em %d e Não podera tirar a habilitaçao.", idade , anoAtual);
        }

        return 0;
    }