#include <stdio.h>
#include <stdlib.h>

int main()
{


    double mediaVetor = 0, somaVetor = 0;
    int i = 0, n = 0, abaixoMedia = 0;


    do
    {
        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 10);
    double vetNumeros[n];

    for(i = 1; i <= n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vetNumeros[i]);

    }

    for(i = 1; i <= n; i++)
    {
        somaVetor = somaVetor +  vetNumeros[i];
    }

    mediaVetor = (double)somaVetor / n;

    printf("\nMEDIA DO VETOR = %.3lf", mediaVetor);

    for(i = 1; i <= n; i++)
    {
        if(vetNumeros[i] < mediaVetor)
        {
            abaixoMedia = 1;
        }
    }

    if(abaixoMedia == 1)
    {
        printf("\nELEMENTOS ABAIXO DA MEDIA: ");
    }

    for(i = 1; i <= n; i++)
    {
        if(vetNumeros[i] < mediaVetor)
        {
            printf("\n%.1lf", vetNumeros[i]);
        }
    }

    printf("\n");
    return 0;
}
