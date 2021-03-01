#include <stdlib.h>
#include <stdio.h>
//exercicio num 11 de vetor
int main()
{
    int A[3][4], B[3][4], i = 0, j = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nInsira o numero: ");
            scanf("%i", &A[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            B[i][j] = A[i][j] * 3;

            printf("\t %i", B[i][j]);
        }
    }
}