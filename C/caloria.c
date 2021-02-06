#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int caloriaTotal, prato, sobremesa, bebida;

    printf("Escolha seu prato principal: \n");
    printf("\n1 - vegetariano\n2 - peixe\n3 - frango\n4 - carne\n");
    scanf("%i", &prato);
    switch (prato)
    {
    case 1:
        caloriaTotal = 180;
        break;
    case 2:
        caloriaTotal = 230;
        break;
    case 3:
        caloriaTotal = 250;
        break;
    case 4:
        caloriaTotal = 250;
        break;
    default:
        break;
    }
    system("cls");
    printf("Escolha sua sobremesa : \n");
    printf("\n1 - abacaxi\n2 - Sorvete Diete\n3 - Mousse Diet\n4 - Mousse Chocolate\n");
    scanf("%i", &sobremesa);

    switch (sobremesa)
    {
    case 1:
        caloriaTotal = caloriaTotal + 75;
        break;
    case 2:
        caloriaTotal = caloriaTotal + 110;
        break;
    case 3:
        caloriaTotal = caloriaTotal + 170;
        break;
    case 4:
        caloriaTotal = caloriaTotal + 200;
        break;
    default:
        break;
    }
    system("cls");
    printf("Escolha sua bebida : \n");
    printf("\n1 - cha\n2 - suco de laranja\n3 - suco de melao\n4 - refrigerante Diet\n");
    scanf("%i", &sobremesa);
    switch (sobremesa)
    {
    case 1:
        caloriaTotal = caloriaTotal + 20;
        break;
    case 2:
        caloriaTotal = caloriaTotal + 70;
        break;
    case 3:
        caloriaTotal = caloriaTotal + 100;
        break;
    case 4:
        caloriaTotal = caloriaTotal + 65;
        break;
    default:
        break;
    }
    system("cls");
    printf("\n\n\nO consumo total de caloria e de: %i", caloriaTotal);
}
