#include <stdio.h>
#include <stdlib.h>
void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int m, i, n, j;
    double somaLinhas;
    m =0;
    n=0;
    i=0;
    j=0;
    somaLinhas=0;



    do
    {
        printf("Qual a quantidade de linhas da matriz? ");
        scanf("%d", &m);

    }
    while (m < 0 || m > 10 );

    do
    {
        printf("Qual a quantidade de colunas da matriz? ");
        limpar_entrada();
        scanf("%d", &n);

    }
    while (n < 0 || n > 10) ;


    double mat[m][n], vetor[m];;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Digite os elementos da %da linha:\n", i + 1);
             limpar_entrada();
            scanf("%lf", &mat[i][j]);
        }
    }

    for ( i=0; i<m; i++)
    {
        somaLinhas = 0;

        for ( j=0; j<n; j++)
        {
            somaLinhas = somaLinhas + mat[i][j];
        }
        vetor[i] = somaLinhas;
    }

    printf("VETOR GERADO:\n");

    for ( i=0; i<m; i++)
    {
        printf("%.1lf\n", vetor[i]);
    }

    return 0;
}
