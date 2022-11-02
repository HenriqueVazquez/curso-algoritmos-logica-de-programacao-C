#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    double largura, comprimento, valorMetro, area, precoTerreno;



    largura = 0;
    comprimento = 0;
    valorMetro = 0;
    area = 0;
    precoTerreno = 0;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("\nDigite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("\nDigite o valor do metro quadrado: ");
    scanf("%lf", &valorMetro);

    area = largura * comprimento;
    precoTerreno = area * valorMetro;


    printf("\nLagura do terreno: %.2lf\n", largura);
    printf("Comprimento do terreno: %.2lf\n", comprimento);
    printf("Valor do metro quadrado: %.2lf\n", valorMetro);
    printf("Area do terreno: %.2lf\n", area);
    setlocale(LC_ALL, "Portuguese_Brasil");
    printf("Preço do terreno: %.2lf\n", precoTerreno);


    return 0;
}
