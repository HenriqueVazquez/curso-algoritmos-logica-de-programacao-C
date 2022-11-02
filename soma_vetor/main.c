#include <stdio.h>
#include <stdlib.h>

int main()
{
    double soma, media;
   int i, n;

    do
    {
        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    double vet[n];

     for(i = 1; i <= n; i++) {
      printf("Digite um numero para somar: ");
      scanf("%lf", &vet[i]);
     }

   printf("\nVALORES = ");
   for(i = 1;i <= n; i++) {
      printf("%.2lf ", vet[i]);


   }

   for(i = 1; i <= n; i++){
      soma = (double)soma + vet[i];
   }

   media = (double)soma / n;


   printf("\nSOMA = %.2lf", soma);
   printf("\nMedia = %.2lf", media);

    return 0;
}
