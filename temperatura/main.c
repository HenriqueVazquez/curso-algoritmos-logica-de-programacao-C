#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    double temperatura, temperaturaConvertida;
    char unidadeMedida, unidadeMedidaResposta;
    char unidadeResposta[50], unidadeMedidaResposta2[50];


    printf("Voce vai digitar a temperatura em qual escala (C/F)?");
    scanf("%c", &unidadeMedida);
    unidadeMedidaResposta = toupper(unidadeMedida);

    if  (toupper(unidadeMedida) == 70 || toupper(unidadeMedida) == 67)
    {
        if  (toupper(unidadeMedida) == 70)
        {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &temperatura);
            temperaturaConvertida = (5.0/9.0 * (temperatura - 32.0));
            strcpy(unidadeResposta, "celsius");

        }
        else if  (toupper(unidadeMedida) == 67)
        {
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temperatura);
            temperaturaConvertida = temperatura * 1.8 + 32;
            strcpy(unidadeResposta, "fahrenheit");

        }
        else
        {
            strcpy(unidadeResposta, "Conversão impossivel para unidade informada");

        }




        printf("Temperatura equivalente em %s: %.2lf%c \n", unidadeResposta, temperaturaConvertida, toupper(unidadeMedida));

    }
    else
    {
        printf("Conversao impossivel para unidade informada");
    }




    return 0;
}
