#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d, v;
    printf("\tEscolha seu destino:\n1 - Norte\n2 - Nordeste\n3 - Centro Oeste\n4 - Sul\n\n");
    scanf("%i", &d);
    printf("1 - Ida ou 2 - Volta\n\n");
    scanf("%i", &v);
    system("cls");
    switch (d)
    {
    case 1:
        if (v == 1)
        {
            printf("O total e de: 500,00");
        }
        else
        {
            printf("O total e de: 900,00");
        }
        break;
    case 2:
        if (v == 1)
        {
            printf("O total e de: 350,00");
        }
        else
        {
            printf("O total e de: 650,00");
        }
        break;
    case 3:
        if (v == 1)
        {
            printf("O total e de: 350,00");
        }
        else
        {
            printf("O total e de: 600,00");
        }
        break;
    case 4:
        if (v == 1)
        {
            printf("O total e de: 300,00");
        }
        else
        {
            printf("O total e de: 550,00");
        }
        break;
    default:
        break;
    }
}