#include <stdio.h>

// ======== TORRE (recursiva simples) ========
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva até chegar a 0
    }
} // fim da função moverTorre


// ======== RAINHA (recursiva simples) ========
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        moverRainha(casas - 1); // chamada recursiva
    }
} // fim da função moverRainha


// ======== BISPO (recursiva + loops aninhados) ========
void moverBispo(int casas) {
    if (casas > 0) {
        int i, j;

        // loop externo = movimento vertical
        for (i = 1; i <= casas; i++) {

            // loop interno = movimento horizontal
            for (j = 1; j <= casas; j++) {
                printf("Cima, Direita\n");
            } // fim do for interno

        } // fim do for externo

        moverBispo(casas - 1); // chamada recursiva
    }
} // fim da função moverBispo


// ======== CAVALO (loops aninhados e controle de fluxo) ========
void moverCavalo() {
    int i, j;

    for (i = 1; i <= 2; i++) { // duas casas pra cima
        printf("Cima\n");

        if (i == 2) {
            for (j = 1; j <= 1; j++) { // uma casa pra direita
                printf("Direita\n");
                break; // finaliza o movimento
            } // fim do for interno
        } // fim do if
    } // fim do for externo
} // fim da função moverCavalo


// ======== FUNÇÃO PRINCIPAL ========
int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorre(4);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(3);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(2);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo();

    return 0;
} // fim da função mainf