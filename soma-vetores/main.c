#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i, n, j;

    do
    {
        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    int vetNumeroA[n];
    int vetNumeroB[n];
    int vetNumeroC[n];

    printf("Digite os valores do vetor A: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetNumeroA[i]);
    }

    printf("\nDigite os valores do vetor B: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetNumeroB[i]);
    }

    for (i = 0; i < n; i++)
    {
        vetNumeroC[i] = vetNumeroA[i] + vetNumeroB[i];
    }


    printf("\nVETOR RESULTANTE:");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", vetNumeroC[i]);
    }

    printf("\n");
    return 0;
}
