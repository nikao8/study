#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int media = 0, i;
    int notas[5];

    for (i = 0; i < 5; i++)
    {
        printf("\n Digite a %i nota: ", i + 1);
        scanf("\n %i", &notas[i]);
        media = media + notas[i];
    }

    printf("\n A sua media e: %i", media / 5);
    if (media / 5 >= 7)
    {
        printf("\n Voce foi aprovado");
    }
    else if (media / 5 >= 5)
    {
        printf("\n Voce pegou recuperacao");
    }
    else
    {
        printf("\n Reprovado");
    }

    return 0;
}
