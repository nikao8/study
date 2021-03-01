#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float dist;
    char carro;
    printf("Qual a distancia?\n ");
    scanf("%f", &dist);
    printf("Tipo de Carro:\n A\n B\n C\n");
    carro = toupper(getch());
    switch (carro)
    {
    case 'A':
        printf("Consumo estimado:  %.2f Litros", (dist / 12));
        break;
    case 'B':
        printf("Consumo estimado:  %.2f Litros", (dist / 9));
        break;
    case 'C':
        printf("Consumo estimado:  %.2f Litros", (dist / 8));
        break;
    default:
        break;
    }
}