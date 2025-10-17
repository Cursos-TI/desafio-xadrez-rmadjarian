#include <stdio.h>

int main() {
   

    // mover a torre 5 casas para a direita
    for (int i = 1, torre = 1; i <= 5; i++, torre++) {
         // movimenta a torre
        printf("A torre se moveu para a direita. %d\n", torre);
    }

    return 0;
}