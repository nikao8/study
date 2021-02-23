#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int n1[14], n2[14], i;

    for (i = 0; i < 15; i++)
    {
        //system("color 7");
        printf("\nAluno..: %i", i + 1);
        printf("\nNota 1.: ");
        scanf("%i", &n1[i]);
        printf("Nota 2.: ");
        scanf("%i", &n2[i]);
        printf("Media .: %i", (n1[i] + n2[i]) / 2);
        printf("\nResultado .: ");
        if ((n1[i] + n2[i]) / 2 >= 6)
        {
            printf("Aprovado");
        }
        else if ((n1[i] + n2[i]) / 2 < 6)
        {
            printf("Reprovado");
        }
    }
}