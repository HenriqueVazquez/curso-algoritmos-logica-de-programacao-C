#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  N=0, i=0 , fat=1;

    printf("Digite o valor de N: ");
   scanf("%d", &N);


   for(i = 1; i <= N; i++){
      fat = fat * i;
   }

   printf("FATORIAL = %.d", fat);

    return 0;
}
