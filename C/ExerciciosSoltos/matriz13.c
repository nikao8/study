#include <stdlib.h>
#include <stdio.h>
//exercicio num 13 de vetor
int main()
{
    int matriz[5][5], i = 0, j = 0, swap;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nn#: ");
            scanf("%i", &matriz[i][j]);
        }
    }
    //print matriz
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("\t%i", matriz[i][j]);
        }
    }
    //troca linha 2 por 5 vice versa
    for (i = 0; i < 5; i++)
    {
        swap = matriz[1][i];
        matriz[1][i] = matriz[4][i];
        matriz[4][i] = swap;
    }
    printf("\n_______________inversao 2 por 5____________________");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("\t%i", matriz[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        swap = matriz[2][i];
        matriz[2][i] = matriz[4][i];
        matriz[4][i] = swap;
    }
    printf("\n_______________inversao 3 por 5____________________");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("\t%i", matriz[i][j]);
        }
    }
    // inversao diag----------
    for (i = 0; i < 5; i++)
    {
        swap = matriz[i][i];
        matriz[i][i] = matriz[i][4 - i];
        matriz[i][4 - i] = swap;
    }
    printf("\n_______________inversao diagonal____________________");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("\t%i", matriz[i][j]);
        }
    }
}
