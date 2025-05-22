#include <stdio.h>

void decrescente (int entranda, int n ) {
    if(entranda <= n) {
        printf("%d",entranda);
        decrescente(entranda + 1, n);
    }
}
    
int main() {

    int n ;

    printf("qual seu numero ");
    scanf("%d", &n);

    decrescente(1, n);

    return 0;
}