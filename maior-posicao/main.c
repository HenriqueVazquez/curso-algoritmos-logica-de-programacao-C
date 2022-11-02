#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, j, posicao;
    double maiorNumero;

    do
    {
        printf("Quantos numeros voce vai digitar? \n");
        scanf("%d", &n);
        printf("\n");

    }
    while (n <= 0 || n > 10);

    double vetNumero[n];

    for(i = 1; i <= n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vetNumero[i]);
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1 ; i <= n; i++)
        {
            if(vetNumero[i] >=   vetNumero[j] && vetNumero[i] >=   maiorNumero)
            {
                maiorNumero = vetNumero[i];
                posicao = i -1;
            }
        }
    }


    printf("\nMAIOR VALOR = %.2lf", maiorNumero);

    printf("\nPOSICAO DO MAIOR VALOR = %d \n", posicao);


    return 0;
}
