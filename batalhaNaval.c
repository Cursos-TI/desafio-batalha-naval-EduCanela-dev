#include <stdio.h>

#define LINHAS  10
#define COLUNAS 10
#define LOCALIZACAO 0

int main() {
    int tabuleiro[LINHAS][COLUNAS];
    char NUM_colunas = 'A';
    int NUM_LINHAS = 0;

    // Inicializa o tabuleiro com 0
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = LOCALIZACAO;
        }
    }

    // NAVIO 1: HORIZONTAL
    for (int j = 6; j <= 8; j++) {
        tabuleiro[8][j] = 3;
    }

    // NAVIO 2: VERTICAL
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][4] = 3;
    }

    // NAVIO 3: DIAGONAL PRINCIPAL
    for (int j = 9, i = 0; j >= 7 && i <= 2; j--, i++) {
        tabuleiro[i][j] = 3;
    }

    // NAVIO 4: DIAGONAL SECUNDÁRIA
    for (int i = 8, j = 1; i >= 6 && j <= 3; i--, j++) {
        tabuleiro[i][j] = 3;
    }

    // HABILIDADE: CRUZ
    for (int j = 9; j >= 7; j--) {
        for (int i = 4; i <= 6; i++) {
            tabuleiro[i][8] = 1;
        }
        tabuleiro[5][j] = 1;
    }

    // HABILIDADE: OCTAEDRO
    for (int i = 7; i <= 9; i++) {
        tabuleiro[i][3] = 1;
        for (int j = 2; j <= 4; j++) {
            tabuleiro[8][j] = 1;
        }
    }

    // HABILIDADE: CONE
    int verticeLinha = 2;
    int verticeColuna = 2;
    int alturaCone = 3;

    for (int i = 0; i < alturaCone; i++) {
        int linha = verticeLinha + i;
        int inicioColuna = verticeColuna - i;
        int fimColuna = verticeColuna + i;

        for (int j = inicioColuna; j <= fimColuna; j++) {
            if (linha >= 0 && linha < LINHAS && j >= 0 && j < COLUNAS) {
                tabuleiro[linha][j] = 1;
            }
        }
    }
    
    

    // IMPRESSÃO DO TABULEIRO
    printf("    ");
    for (int i = 0; i < COLUNAS; i++) {
        printf(" %c", NUM_colunas++);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d |", NUM_LINHAS++);
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
