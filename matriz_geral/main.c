#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n = 0, j = 0, linhaEscolhida = 0, colunaEscolhida = 0;
    double somaPositivos = 0;

    do
    {
        printf("Qual a ordem da matriz? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    double mat[n][n];




    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(mat[i][j] >= 0)
            {
                somaPositivos = somaPositivos +  mat[i][j];
            }
        }
    }


    printf("\nSOMA DOS POSITIVOS: %.2lf\n", somaPositivos);
    printf("\n");

    printf("Escolha uma linha: ");
    scanf("%d", &linhaEscolhida);

    printf("LINHA ESCOLHIDA: ");

    for (int i=0; i<n; i++)
    {
        printf("%.1lf ", mat[linhaEscolhida][i]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &colunaEscolhida);

    printf("COLUNA ESCOLHIDA: ");
    for (int i=0; i<n; i++)
    {
        printf("%.1lf ", mat[i][colunaEscolhida]);
    }
    printf(" \n");


    printf("\n\nDIAGONAL PRINCIPAL: ");
    for(i = 0; i < n ; i++)
        for (int i=0; i<n; i++)
        {
            printf("%.1lf ", mat[i][i]);
        }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (mat[i][j] < 0)
            {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:\n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }



    return 0;
}
