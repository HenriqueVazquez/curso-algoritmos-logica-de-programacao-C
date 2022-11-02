#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distancia, combustivelGasto, consumo;

    printf("Calculo de consumo: \n");
    printf("Distancia percorrida: ");
    scanf("%lf", &distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGasto);


    consumo = distancia / combustivelGasto;

    printf("O consumo medio = %.3lf", consumo);

    return 0;
}
