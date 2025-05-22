#include <stdio.h>

// 1 -> n
// 1 -> 10


void crescente(int contador , int n ) {
    if(contador <= n ) {
        printf("%d ", contador);
        crescente(contador + 1, n);
    }
    
}

int main() {

    int n ;

    printf("qual seu numero ");
    scanf("%d", &n);


    crescente(1, n);
    return 0;

}

    




