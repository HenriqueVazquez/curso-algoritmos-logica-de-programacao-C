#include <stdio.h>
int main()
{
    int N, i;


    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N], soma=0, media=0;

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

    }
    printf("\nNUMEROS DIGITADOS = ");
    for (i = 0; i < N; i++)
    {
        printf("%.1lf ", vet[i]);
        soma = soma + vet[i];
    }
    media = soma/N;
    printf("\nSoma = %.2lf", soma);
    printf("\nMedia = %.2lf", media);
    return 0;
}
