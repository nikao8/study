#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, peso;
    int resfriado, alimentado;

    printf("Informe a idade:\t ");
    scanf("\t %i", &idade);
    printf("Informe o peso:\t ");
    scanf("\t %i", &peso);
    printf("Esta resfriado:\n1-Sim ou 2-Nao\t");
    scanf("\t %i", &resfriado);
    printf("Esta alimentado:\n1-Sim ou 2-Nao\t");
    scanf("\t %i", &alimentado);

    if (((idade > 15) && (idade < 69) && (peso > 50)) && ((resfriado == 2) && (alimentado == 2)))
    {
        printf("Apto para doar!!");
    }
    else
    {
        printf("Nao esta apto!");
    }
}