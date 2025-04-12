//nivel mestre
// Desafio: Movimentos de peças de xadrez

#include <stdio.h>

// Função recursiva para o movimento da Torre (para a Direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (para a Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva + loops aninhados para o movimento do Bispo (Cima Direita)
void moverBispo(int linhas, int colunas) {
    if (linhas == 0 || colunas == 0) return;

    for (int i = 0; i < 1; i++) { // Simula movimento vertical
        for (int j = 0; j < 1; j++) { // Simula movimento horizontal
            printf("Cima Direita\n");
        }
    }

    moverBispo(linhas - 1, colunas - 1); 
}

int main() {
    // TORRE ------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);

    printf("\n");

    // BISPO ------------------
    printf("Movimento do Bispo (5 casas na Diagonal - Cima e Direita):\n");
    moverBispo(5, 5);

    printf("\n");

    // RAINHA ------------------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    printf("\n");

    // CAVALO ------------------
    printf("Movimento do Cavalo (em L - 2 Cima, 1 Direita):\n");

    // Loop externo simula o movimento vertical (2 casas para cima)
    for (int i = 1; i <= 2; i++) {
        if (i == 2) {
            // Loop interno simula o movimento horizontal (1 casa para direita)
            int j = 1;
            while (j <= 1) {
                if (i == 2 && j == 1) {
                    printf("Direita\n");
                    break; 
                }
                j++;
            }
        }
        if (i == 1 || i == 2) {
            printf("Cima\n");
            continue;
        }
    }

    return 0;
}
