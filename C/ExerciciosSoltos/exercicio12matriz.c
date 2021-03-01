#include <stdlib.h>
#include <stdio.h>
//exercicio num 12 de vetor
int main()
{
    int Barb[5][3], i = 0, j = 0;
    float bonus;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n[%i]barbeiro -> Entre [1]Barba - [2]Cabelo - [3]Combo. Quantos de %i voce realizou: ", i + 1, j + 1);
            scanf("%i", &Barb[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            bonus = ((Barb[i][0] * 20) + (Barb[i][1] * 30) + (Barb[i][2] * 45)) * 0.5;
        }
        printf("\tBonus do [%i]barbeiro de: %.2f", i + 1, bonus);
    }
}