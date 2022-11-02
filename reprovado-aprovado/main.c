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
    double   nota1, nota2, notaFinal ;



    printf("Digite a primeira nota:  ");
    scanf("%lf", &nota1);

    printf("\nDigite a primeira nota:  ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    printf("NOTA FINAL = %.1lf\n", notaFinal);

    if( notaFinal < 60.0 )
    {
        printf("REPROVADO");
    }
    else
    {
        printf("APROVADO");
    }



}
