#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n = 0, j = 0, somaDiagonalPrincipal = 0;



    do
    {
        printf("Qual a ordem da matriz? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    int mat[n][n];



    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n  ; i++)
    {
        for(j = i +1; j < n  ; j++)
        {

            somaDiagonalPrincipal = somaDiagonalPrincipal + mat[i][j];
        }

    }


    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", somaDiagonalPrincipal);

    return 0;
}
