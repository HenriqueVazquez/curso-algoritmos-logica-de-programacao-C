#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0, i = 0, n = 0, j = 0;

    do
    {
        printf("Qual a quantidade de linhas de cada matriz?  ");
        scanf("%d", &m);

    }
    while (m <= 0 || m > 10);


    do
    {
        printf("Qual a quantidade de colunas da matriz? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    int matA[m][n];
    int matB[m][n];
    int matSoma[m][n];

    printf("\nDigite os valores da matriz A: \n");
    for (i = 0 ; i < m; i++ )
    {
        for (j = 0 ; j < n; j++ )
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Digite os valores da matriz B: \n");
    for (i = 0 ; i < m; i++ )
    {
        for (j = 0 ; j < n; j++ )
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    for (i = 0 ; i < m; i++ )
    {
        for (j = 0 ; j < n; j++ )
        {
            matSoma[i][j] =  matA[i][j] +  matB[i][j];
        }

    }


    printf("MATRIZ SOMA: \n"   );

    for (i = 0 ; i < m; i++ )
    {
        for (j = 0 ; j < n; j++ )
        {
            printf( "%d ",matSoma[i][j]);
        }
        printf("\n");
    }



    return 0;
}
