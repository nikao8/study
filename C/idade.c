#include <stdio.h>

int main()
{
    int idade;

    printf("Digite idade: \n");
    scanf("%i", &idade);

    if (idade < 18)
    {
        printf("Jovem.");
    }
    else if ((idade >= 18) && (idade < 60))
    {
        printf("Adulto.");
    }
    else
    {
        printf("Idoso");
    }

    return 0;
}
