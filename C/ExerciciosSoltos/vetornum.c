#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num[14], i, maior, procura;
    char letra[9];

    for (i = 0; i < 15; i++)
    {
        printf("Digite um n#: ");
        scanf("%i", &num[i]);
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }

    // resolução de exercicio 2

    for (i = 0; i < 15; i++)
    {
        printf("\tn#: %i", num[i]);
    }

    //resolução de exercicio 3
    printf("\nprocure por:  ");
    scanf("%i", &procura);
    for (i = 0; i < 15; i++)
    {
        if (procura == num[i])
        {
            printf("A posicao e: %i", i);
        }
    }
    printf("\n\n maior num:  %i\n", maior);
    system("pause");
    system("cls");
    // exercicio 4
    printf("EXERCICIO 4\n");
    for (i = 0; i < 10; i++)
    {
        printf("digite letra de n#%i:  ", i + 1);
        scanf("%s", &letra[i]);
    }
    system("pause");
    system("cls");
    //ex 5
    printf("\n Dividindo vetor num por par e impar: \n");
    for (i = 0; i < 14; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("\n o numero %i e par.", num[i]);
        }
        else if (num[i] % 2 != 0)
        {
            printf("\n o nume %i e impar.", num[i]);
        }
    }
    system("cls");
    //ex 6
    printf("mostrando numeros multiplos de 6\n");
    for (i = 0; i < 8; i++)
    {
        if (num[i] % 6 == 0)
        {
            printf("\t %i", num[i]);
        }
    }
}