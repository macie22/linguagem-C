#include <stdio.h>

int main() {

    int  idade; 

    printf("Qual sua idade ? ");
    scanf("%d", &idade);

    if (idade >= 65) {
        printf("voce é idoso (a)");
    }

    else if (idade >= 18) {
        printf("voce é adulto ");
    }
    else if (idade >= 13) {
        printf("voce é adolecente ");
    }
    else {
        printf("criança");
    }

    return 0;
}