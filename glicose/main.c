#include <stdio.h>
#include <stdlib.h>

int main()
{
    double glicose = 0;
    char classificacao[50];

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100)
    {
        strcpy(classificacao, "Normal");
    }
    else if ( glicose <= 140)
    {
        strcpy(classificacao, "Elevado");
    }




printf("Classificacao: %s ", classificacao);

return 0;
}
