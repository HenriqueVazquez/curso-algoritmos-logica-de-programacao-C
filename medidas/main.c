#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A = 0, B = 0, C = 0, areaQuadrado = 0, areaTriangulo = 0 , areaTrapezio = 0;

    printf("Digite a medida A: ");
    scanf("%lf", &A);

   printf("Digite a medida B: ");
   scanf("%lf", &B);
   printf("Digite a medida C: ");
   scanf("%lf", &C);

   areaQuadrado = A * A;
   areaTriangulo = (A * B) / 2;
   areaTrapezio = (A + B) / 2 * C;

   printf("\nQUADRADO = %.4lf", areaQuadrado);
   printf("\nTRIANGULO = %.4lf", areaTriangulo);
   printf("\nTRAPEZIO = %.4lf", areaTrapezio);

    return 0;
}
