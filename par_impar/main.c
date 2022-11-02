#include <stdio.h>
#include <stdlib.h>

int main()
{
    int    N = 0, i = 0, x = 0;


    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);


    for(i = 1; i <= N; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &x);

        if( x == 0)
        {
            printf("NULO\n");
        }
        else if (x % 2 == 0)
        {
            if( x < 0)
            {
                printf("PAR NEGATIVO\n");
            }
            else
            {
                printf("PAR POSITIVO\n");
            }
        }
        else if( x < 0)
        {
            printf("IMPAR NEGATIVO\n");
        }
        else
        {
            printf("IMPAR POSITIVO\n");
        }
    }


    return 0;
}
