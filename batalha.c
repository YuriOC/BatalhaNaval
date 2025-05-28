#include <stdio.h>

int main()
{
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int i, j;

    // organiza a tabela visivel
    printf("\n --- Tabuleiro --- \n  ");
    for (i = 0; i < 10; i++)
    {
        printf(" %c", linha[i]);
    }

    // transforma todas as casas em 0 (agua)
    for (i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    //navio horizontal
    int linhaH = 3;
    int colunaH = 4;
    for (i = 0; i < 3; i++)
    {
        tabuleiro[linhaH + i][colunaH] = 3;
    }

    //navio vertical
    int linhaV = 2;
    int colunaV = 5;
    for (j = 0; j < 3; j++)
    {
        tabuleiro[linhaV][colunaV + j] = 3;
    }

    //exibe o tabuleiro
    for (i = 0; i < 10; i++)
    {
        printf("\n %d ", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
    }

    return 0;
}