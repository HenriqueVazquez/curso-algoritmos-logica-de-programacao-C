#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  N=0, i=0;
    double x=0, y=0, divisao=0;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        printf("\nEntre com o numerador: ");
        scanf("%lf", &x);
        printf("Entre com o denominador: ");
        scanf("%lf", &y);

        if( y == 0)
        {
            printf("DIVISAO IMPOSSIVEL");
        }
        else
        {

            divisao = x / y;
            printf("DIVISAO = %.2lf\n", divisao);
        }
    }



        return 0;
    }
