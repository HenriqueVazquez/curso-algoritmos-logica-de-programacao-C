#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, j, somaNegativos;


    somaNegativos = 0;

    do
    {
        printf("Qual a ordem da matriz? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    int mat[n][n];


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Elemento [%d, %d]:  ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }


    printf("DIAGONAL PRINCIPAL: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", mat[i][i]);

    }
        printf("\n");


       for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
    {
        if  (mat[i][j] < 0) {
        somaNegativos = somaNegativos + 1;
        }
    }
    }

        printf("QUANTIDADE DE NEGATIVOS = %d", somaNegativos);

        return 0;
    }
