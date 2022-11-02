#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n = 0, j = 0, maior =0;

    do
    {
        printf("Qual a ordem da matriz? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    int mat[n][n];
    int maiorDaLinha[n];

    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n ; i++)
    {
        maior = mat[i][0];

        for(j = 0; j < n ; j++)
        {


            if( maior < mat[i][j])
            {
               maior = mat[i][j];
            }
        }
        maiorDaLinha[i] = maior;

    }

      printf("\nMAIOR ELEMENTO DE CADA LINHA: \n");
    for(i = 0; i < n ; i++)
    {
        printf("%d\n", maiorDaLinha[i]);
    }

    return 0;
}
