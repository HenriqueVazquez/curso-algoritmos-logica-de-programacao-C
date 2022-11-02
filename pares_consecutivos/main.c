#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  X=0, soma=0;

    printf("Digite um numero inteiro: ");
   scanf("%d", &X);

   while(X != 0) {
      if( X % 2 != 0) {
         X = X + 1;
      }

      soma = 5 * X + 20;
      printf("\nSOMA = %d", soma);

      printf("\nDigite um numero inteiro: ");
     scanf("%d", &X);

   }

    return 0;
}
