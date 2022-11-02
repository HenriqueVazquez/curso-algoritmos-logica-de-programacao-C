#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, temNegativo;
    do
    {
        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    int vet[n];
    temNegativo =0;


    for (i = 0; i < n; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &vet[i]);
    }


    for (i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            temNegativo = 1;
        }
    }

    if (  temNegativo != 0)
    {
        printf("\nNumeros negativos: ");
    }
    else
    {
        printf("\nNao digitou numeros negativos: ");
    }


    for (i = 0; i <= n; i++)
    {
        if (vet[i] < 0)
        {
            printf("\n%d",vet[i]);
        }
    }



    return 0;
}
