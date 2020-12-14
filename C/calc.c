#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calc, n1, n2;
    printf("Escolha uma operacao: \n");
    printf("1 - para soma. \n");
    printf("2 - para subtracao. \n");
    printf("3 - para multiplicacao. \n");
    printf("4 - para divisao. \n");
    printf("0 - para sair. \n");
    scanf("%i", &calc);

    while (calc == 1)
    {
        printf("Digite os numeros: \n");
        scanf("%i", &n1);
        scanf("%i", &n2);
        printf("Soma: %i \n", n1 + n2);
        return main();
    }
    while (calc == 2)
    {
        printf("Digite os numeros: \n");
        scanf("%i", &n1);
        scanf("%i", &n2);
        printf("Subtracao: %i \n", n1 - n2);
        return main();
    }
    while (calc == 3)
    {
        printf("Digite os numeros: \n");
        scanf("%i", &n1);
        scanf("%i", &n2);
        printf("Multiplicacao: %i \n", n1 * n2);
        return main();
    }
    while (calc == 4)
    {
        printf("Digite os numeros: \n");
        scanf("%i", &n1);
        scanf("%i", &n2);
        printf("Divisao: %i \n", n1 / n2);
        return main();
    }
    if (calc == 0)
    {
        system("exit");
    }
    return 0;
}