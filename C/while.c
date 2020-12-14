#include <stdio.h>

int main()
{
    int i, n;
    n = 0;
    printf("Digite um numero para contagem: \n");
    scanf("%i", &i);

    while (n < i)
    {
        printf("ja contamos ate %i. \n", n);
        n++;
    }

    return 0;
}