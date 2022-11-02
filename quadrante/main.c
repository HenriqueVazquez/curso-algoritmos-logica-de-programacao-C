#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;


    do
    {
        printf("Digite os valores das coordenadas X:  ");
        scanf("%d", &X);
        printf("Digite os valores das coordenadas Y:  ");
        scanf("%d", &Y);
        if (X > 0 && Y > 0)
        {
            printf("QUADRANTE: Q1\n");
        }
        else if (X < 0 && Y > 0)
        {
            printf("QUADRANTE: Q2\n");
        }
        else if (X < 0 && Y < 0)
        {
            printf("QUADRANTE: Q3\n");
        }
        else if (X > 0 && Y < 0)
        {
            printf("QUADRANTE: Q4\n");
        }
        else if (X == 0 && Y == 0)
        {
            printf("QUADRANTE: Origem\n");
        }
        else if (X == 0)
        {
            printf("QUADRANTE: Eixo Y\n");
        }
        else
        {
            printf("QUADRANTE: Eixo X\n");
        }


    }
    while(X != 0 || Y != 0);


    return 0;
}
