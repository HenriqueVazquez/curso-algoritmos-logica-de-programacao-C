#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0, n=0, somaPares=0;

    do
    {
        printf("Quantos numeros voce vai digitar? \n");
        scanf("%d", &n);
        printf("\n");

    }
    while (n <= 0 || n > 10);

    int vetNumero[n];


    for(i = 1; i <= n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetNumero[i]);
    }

    for(i = 1; i <= n; i++)
    {
        if(vetNumero[i]% 2 == 0)
        {
            printf("%d ",vetNumero[i] );
            somaPares = somaPares + 1;
        }
    }


    printf("\nQUANTIDADE DE PARES = %d\n", somaPares);


    return 0;
}
