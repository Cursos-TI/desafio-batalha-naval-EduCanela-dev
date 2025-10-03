#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    #include <stdio.h>

int main(){

   
    int tabuleiro[10][10];
    
    char NUM_colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int NUM_linhas = 0;
    int linha = 0;
    
    
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }
    
    
    printf("\n\n");
    
    
    tabuleiro[8][8] = 3;
    tabuleiro[8][7] = 3;
    tabuleiro[8][6] = 3;

    tabuleiro[1][3] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[3][3] = 3;
    


    printf("      ");//espaço que define a letra da coluna
    for (int i = 0; i <= 10; i++)
    {
        printf("%c ", NUM_colunas[i]);
    }


            printf("\n\n");


    
    while (linha < 10)
    {
        printf("%2d|   ", NUM_linhas++);//define o numero da linha
            for (int coluna = 0; coluna < 10; coluna++)
            {
                printf("%d ", tabuleiro[linha][coluna]);
            }
        linha++;
        printf("\n");        
    }
    

return 0;}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

 