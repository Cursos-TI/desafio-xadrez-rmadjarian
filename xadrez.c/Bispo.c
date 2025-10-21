#include <stdio.h>

int main() {
    int i = 1;
    

    // O bispo move-se sempre na diagonal (Cima + Direita)
    do {
        printf("Cima, Direita \n");  // movimento na diagonal superior direita
        i++;
        
    } while (i <= 5);

    return 0;
}