#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma, i, troca;

    printf("Digite dois numeros (ou dua vezes o zero para finalizar: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != 0 || y != 0)
    {
        i = 0;
        soma = 0;

        if (x > y)
        {
            troca = x;
            x = y;
            y = troca;
        }
        for (i = x + 1 ; i <= y - 1; i++)
        {
            if (i % 2 != 0)
            {
                soma = soma + i;
            }
        }

        printf("\nSoma dos impare = %d", soma);
        soma = 0;
        printf("\nDigite dois numeros (ou dua vezes o zero para finalizar: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    return 0;
}
