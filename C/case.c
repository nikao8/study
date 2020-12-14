#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("digita um #");
    scanf("%i", &x);
    switch (x)
    {
    case 1:
        printf("\noioi");
        break;

    default:
        break;
    }
    return 0;
}