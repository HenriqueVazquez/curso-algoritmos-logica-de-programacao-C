#include <stdio.h>
#include <stdlib.h>

int main()
{
     int N, i;
   double nota1, nota2, nota3, media;

    printf("Quantos casos você vai digitar? ");
   scanf("%d", &N);

   for(i = 1; i <= N; i++){
      printf("\nDigite tres numeros: \n");
      scanf("%lf", &nota1);
      scanf("%lf", &nota2);
      scanf("%lf", &nota3);

      media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);

      printf("MEDIA = %.1lf\n", media);


   }

    return 0;
}
