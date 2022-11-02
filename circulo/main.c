#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, area;


    printf("Area de um criculo: ");
    printf("\nInforme o raio: ");
    scanf("%lf", &raio);


    area =   3.14159 * (pow(raio, 2)) ;

    printf("Area = %.3lf", area);

    return 0;
}
