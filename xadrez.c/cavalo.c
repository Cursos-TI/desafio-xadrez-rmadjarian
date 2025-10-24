#include <stdio.h>

int main() {
    // Movimento do cavalo: 2 para baixo, 1 para esquerda
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("\n--- Movimento do Cavalo ---\n");

    // Primeiro movimento: duas casas para baixo (usando for)
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo movimento: uma casa para a esquerda (usando while)
    int j = 1;
    while (j <= casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}