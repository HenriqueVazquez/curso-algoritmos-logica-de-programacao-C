#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, salarioAtualizado, aumento, porcentagem;

    printf("Calcular ajuste do funcionario\n");

    printf("Digite o salrio do funcionario: ");
    scanf("%lf", &salario);

    if(salario <= 1000)
    {
        porcentagem = 0.20;
    }
    else if(salario <= 3000)
    {
        porcentagem = 0.15;
    }
    else if(salario <= 8000)
    {
        porcentagem = 0.10;
    }
    else
    {
        printf("Calcule novamente");
    }



    aumento = salario * porcentagem;
    salarioAtualizado = salario + aumento;

    printf("Novo salario = %.2lf", salarioAtualizado);
    printf("\nAumento = %.2lf", aumento);
    printf("\nPorcentagem = %.2lf%%", porcentagem * 100);

    return 0;
}
