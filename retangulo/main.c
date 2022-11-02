#include <stdio.h>
#include <stdlib.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite altura do retangulo: ");
    scanf("%lf", &altura);

    area =  base * altura;
    perimetro = 2 *(base + altura);
    diagonal = sqrt(pow(base,2) + pow(altura, 2));

    printf("\nArea: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", perimetro);
    printf("Diagonal:  %.4lf\n", diagonal);



    return 0;
}
