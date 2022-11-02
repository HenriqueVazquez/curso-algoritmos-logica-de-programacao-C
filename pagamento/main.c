#include <stdio.h>
#include <stdlib.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    double valorHora = 0, pagamento = 0;
    int horasTrabalhadas = 0;
    char nome[50];


    printf("Nome: ");
    ler_texto(nome, 50);


    printf("Valor por hora: ");

    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    limpar_entrada();
    scanf("%d", &horasTrabalhadas);

    pagamento=(valorHora * horasTrabalhadas);

    printf("O pagamento para %s deve ser R$ %.2lf", nome, pagamento);


    return 0;
}
