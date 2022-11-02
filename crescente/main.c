#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x, y;
    char ordem[50];

    printf("Digite o primeiro numero:  ");
    scanf("%d", &x);
    printf("\nDigite o segundo numero:  ");
    scanf("%d", &y);

    while (x != y)
    {

        if( x > y)
        {

            strcpy ( ordem, "Decrescente" );
        }
        else
        {

            strcpy ( ordem, "Crescente" );
        }
        printf("\nA ordem de %d e %d = %s\n", x, y, ordem);

        printf("\nDigite o primeiro numero:  ");
        scanf("%d", &x);
        printf("\nDigite o segundo numero:  ");
        scanf("%d", &y);
    }
    printf("\nFIM");
    return 0;
}
