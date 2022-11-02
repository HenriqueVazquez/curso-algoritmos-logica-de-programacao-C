#include <stdio.h>
#include <stdlib.h>

int main()
{
   double preco = 0, dinheiro = 0, troco = 0, resto = 0;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

   printf("Quantidade comprada: ");
       scanf("%d", &quantidade);
   printf("Dinheiro recebido: ");
  scanf("%lf", &dinheiro);

   if( dinheiro >= (preco * quantidade)) {
      troco = dinheiro - preco * quantidade;
      printf("\nTROCO = %.2lf", troco);
   } else {
      resto = preco * quantidade - dinheiro;
      printf("\nDINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", resto);
   }

    return 0;
}
