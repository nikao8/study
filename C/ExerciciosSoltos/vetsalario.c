#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario[10], salarionovo[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("\nInsira salario funcionario n# %i:  ", i + 1);
        scanf("%i", &salario[i]);
        salarionovo[i] = salario[i] * 0.08;
        printf("Aumento de : %i.     Totalizando: %i", salarionovo[i], salario[i] + salarionovo[i]);
    }
}