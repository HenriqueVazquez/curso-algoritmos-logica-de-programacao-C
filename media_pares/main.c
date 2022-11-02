#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somaVetor = 0, i = 0, n = 0, contPar = 0, temPar = 0;
    double mediaPares = 0;

    do
    {
        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 10);
    int vetNumeros[n];

    for(i = 1; i <= n; i++){
      printf("Digite o %do numero: ", i);
      scanf("%d", &vetNumeros[i]);
    }

    for(i = 1; i <= n; i++){
      if(vetNumeros[i] % 2 == 0) {
         somaVetor = somaVetor +  vetNumeros[i];
         temPar = 1;
         contPar = contPar + 1;
      }
    }

   if(temPar  != 1) {

      printf("\nNENHUM NUMERO PAR");
   }else{
      mediaPares = somaVetor / contPar;
      printf("MEDIA DOS PARES = %.2lf \n", mediaPares);
   }


    return 0;
}
