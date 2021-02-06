#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int media = 0, i, n;

    printf("\n qual o tamanho do vetor?");
    scanf("\t %i", &n);
    int notas[n];
    for (i = 0; i < n; i++)
    {
        printf("\n Digite o %i n#: ", i + 1);
        scanf("\n %i", &notas[i]);
        media = media + notas[i];
    }

    printf("\n a media e: %i", media / 10);
}