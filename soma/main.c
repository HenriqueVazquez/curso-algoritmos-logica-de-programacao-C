#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x, y, soma;


    printf("Some dois numeros:");
    printf("\nDigite x: ");
    scanf("%d", &x);
    printf("\nDigite y: ");
    scanf("%d", &y);

    soma = x + y;


    printf("Soma = %d", soma);

    return 0;
}
