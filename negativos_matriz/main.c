#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0, i = 0, n = 0, j = 0, somaLinhas = 0,temNegativo = 0;

    do
    {
        printf("Qual a quantidade de linhas da matriz? ");
        scanf("%d", &m);

    }
    while (m <= 0 || m > 10);

    do
    {
        printf("Qual a quantidade de colunas da matriz? ");
        scanf("%d", &n);

    }
    while (m <= 0 || n > 10);

    int mat[m][n];


    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Elemento [%d , %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }

    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(mat[i][j]  < 0)
            {
                temNegativo = 1;
            }
        }
    }

    if(temNegativo == 1)
    {
        printf("\nVALORES NEGATIVOS: ");
    }


    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(mat[i][j]  < 0)
            {
                printf("\n%d",  mat[i][j]);
            }

        }

    }
    printf("\n");
    return 0;
}
