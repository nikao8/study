#include <stdlib.h>
#include <stdio.h>
//exercicio num 10 de vetor
int main()
{
    int num[5][5], i = 0, j = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nInsira o #%i numero", i);
            scanf("%i", &num[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("\t %i", num[i][j]);
        }
    }
}