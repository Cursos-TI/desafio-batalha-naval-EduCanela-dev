#include <stdio.h>

#define LINHAS  10
#define COLUNAS 10
#define LOCALIZACAO 0

int main(){

    int tabuleiro[LINHAS][COLUNAS];
    char NUM_colunas = 'A';//DEFINE A LETRA DA COLUNA NO TABULEIRO
    int NUM_LINHAS = 0;//DEFINE O NUMERO DA LINHA NO TABULEIRO

    //INICIALIZAÇÃO DO TABULEIRO
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = LOCALIZACAO;//"LOCALIZACAO" FOI PUXADO PARA DEFINIR VALORES QUE "i" E "j" VÃO PRINTAR
        }
    }
    

    //NAVIO 1 : HORIZONTAL
    for (int j = 6; j <= 8; j++)
    {
        tabuleiro[8][j] = 3;
    }
    
    //NAVIO 2 : VERTICAL
    for (int i = 1; i <= 3; i++)
    {
        tabuleiro[i][4] = 3;
    }
    
    //NAVIO 3 : DIAGONAL
    for (int j=9, i=0 ; j>=7, i<=2 ; j--, i++)
    {
        tabuleiro[i][j] = 3;   
    }
    
    //NAVIO 4 : DIAGONAL
    for (int i=8, j=1 ; i>=6, j<=3 ; i--, j++)
    {        
        tabuleiro[i][j] = 3;
    }
    
    
    printf("      ");//ESPAÇO PARA EXIBIR A LETRA DA COLUNA
    for (int i = 0; i < COLUNAS; i++)//"COLUNAS" FOI PUXADO PARA DEFINIR QUANTAS LETRAS VÃO SER GERADAS
    {
        printf("%c ", NUM_colunas);
        NUM_colunas++;//SOMANDO MAIS UMA LETRA
    }
    
        printf("\n");
    
    for (int i = 0; i < LINHAS; i++)//"LINHAS" FOI PUXADO PARA DEFINIR QUANTAS LINHAS VÃO TER
    {
        printf("%d |   ", NUM_LINHAS++);//DEFINE O NUMERO DA COLUNA E ALINHA O TABULEIRO COM AS LETRAS DE CADA COLUNA
        for (int j = 0; j < COLUNAS; j++)//"COLUNAS" FOI PUXADO PARA DEFINIR QUANTAS LETRAS VÃO SER GERADAS
        {
            printf("%d ", tabuleiro[i][j]);//EXIBIBIÇÃO DO TABULEIRO
        }
        printf("\n");
    }
        

return 0;}