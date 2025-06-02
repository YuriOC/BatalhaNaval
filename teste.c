#include <stdio.h>

#define LINHA 10
#define COLUNA 10

//CONE
#define LINHAC 3
#define COLUNAC 5

int main()
{

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHA][COLUNA];
    int i, j;

    // transforma todas as casas em 0 (agua)
    for (i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // cone
    int linhaC = 3;
    int colunaC = 3;

    int cone[LINHAC][COLUNAC];

    for (i = 0; i < LINHAC; i++)
    {
        for (int j = 0; j < COLUNAC; j++)
        {
            cone[i][j] = 0;
        }
    }

    for (i = 0; i < LINHAC; i++)
    {
        for (j = 0; j < COLUNAC; j++)
        {
            if (j == 2 && i == 0)
            {
                cone[i][j] = 3;
                break;
            }
        }

        for (j = 0; j < COLUNAC; j++)
        {
            if (j == 2 && i == 1)
            {
                cone[i][j] = 3;
                cone[i][j + 1] = 3;
                cone[i][j - 1] = 3;
                break;
            }
        }

        for (j = 0; j < COLUNAC; j++)
        {
            if (i == 2)
            {
                cone[i][j] = 3;
            }

        }
    }

    for (i = 0; i < LINHAC; i++)
    {
        printf("\n %d ", i + 1);
        for (j = 0; j < COLUNAC; j++)
        {
            printf("%d ", cone[i][j]);
        }
    }


    //aplicacao do cone no tabuleiro
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; i++)
        {
            if (tabuleiro[linhaC + i][colunaC + j] == 0)
            {
                tabuleiro[linhaC + i][colunaC + j] = cone[i][j];
            }
        }
    }
}
