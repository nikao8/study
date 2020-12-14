#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nascidos, mortos, habitantes, calculo;
    float taxadeNatalidade, taxadeMortalidade;
    //char calculo;

    printf("Precisamos saber quantos habitantes ha: \n");
    scanf("%i", &habitantes);
    system("cls || clear");
    printf("Voce deseja saber qual dado? \n");
    printf(" 1 - Natalidade\n");
    printf(" 2 - Mortalidade\n");
    scanf("%i", &calculo);
    system("cls || clear");

    switch (calculo)
    {
    case 1:
        printf("Quantas pessoas nasceram? \n");
        scanf("%i", &nascidos);
        printf("A taxa de natalidade e de: \n");
        float taxadeNatalidade = (nascidos * 1000 / habitantes);
        printf("%.6f", taxadeNatalidade);
        break;
    case 2:
        printf("Quantas pessoas morreram? \n");
        scanf("%i", &mortos);
        printf("A taxa de mortalidade e de: \n");
        float taxadeMortalidade = (mortos * 1000 / habitantes);
        printf("%.6f", taxadeMortalidade);
        break;
    //case 3:
    //    printf("O vitor e o nicolas sao uns pela saco");
    default:
        system("exit");
        break;
    }

    return 0;
}