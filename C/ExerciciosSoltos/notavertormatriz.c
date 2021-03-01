#include <stdlib.h>
#include <stdio.h>

int main()
{
    int alunos[4][3], i = 0, j = 0, nfinal[4], k;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nInsira nota %i do aluno %i.", j, i);
            scanf("%i", &alunos[i][j]);
        }
        nfinal[i] = alunos[i][0] + alunos[i][1] + alunos[i][2];

        printf("\n Aluno: %i\t Nota final  = %i", i, nfinal[i]);
    }
}