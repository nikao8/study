#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    {
        int i, n;
        printf("Quantos numeros vc quer averiguar?\n");
        scanf("%i", &n);
        printf("Os multiplos de 10 entre 0 e %i: \n", n);
        for (i = 0; i < n; i++)
        {
            if (i % 10 == 0)
            {
                printf(" %i\t", i);
            }
        }
    }

    return 0;
}
