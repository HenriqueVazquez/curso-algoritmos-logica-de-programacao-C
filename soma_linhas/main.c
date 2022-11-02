#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0, i = 0, n = 0, j = 0;
    double somaLinhas = 0;


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

    double mat[m][n];

    printf("\n");

    for(i = 0; i < m; i++)
    {
        printf("Digite os elementos da %da linha: \n", i + 1);
        for(j = 0; j < n; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
        printf("\n");
    }

    printf("\nVETOR GERADO: \n");

    for(i = 0; i < n; i++)
    {
        if(somaLinhas > 0)
        {
            printf("%.2lf\n", somaLinhas);
            somaLinhas = 0;
        }
        for(j = 0; j < n; j++)
        {
            somaLinhas = (double)somaLinhas + mat[i][j];

        }
    }





    return 0;
}
