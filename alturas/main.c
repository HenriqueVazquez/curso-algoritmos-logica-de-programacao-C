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
    int i, n,
        somaMaiorIdade=0;
    double somaAltura, mediaAltura, porcentagemMenorIdade;

    somaAltura=0,
    mediaAltura=0,
    porcentagemMenorIdade=0;

    do
    {
        printf("Quantas pessoas serao digitadas? ");
        scanf("%d", &n);

    }
    while (n <= 0 || n > 10);

    char vetNome[n][50];
    int vetIdade[n];
    double vetAltura[n];

    for (i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa: ", i+1);
        printf("\nNome: ");
        limpar_entrada();
        ler_texto(vetNome[i], 50);

        printf("Idade: ");
        scanf("%d", &vetIdade[i]);

        printf("Altura: ");
        scanf("%lf", &vetAltura[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (vetIdade[i] < 16)
        {
            somaMaiorIdade = somaMaiorIdade + 1;
        }
        somaAltura = somaAltura +  vetAltura[i];
    }
    mediaAltura =  somaAltura / n;

    printf("\nAltura media: %.2lf", mediaAltura);

    porcentagemMenorIdade =  ((double)somaMaiorIdade  / n) *100.0;

    printf("\nPessoas com menos de 16 anos: %.2lf%%", porcentagemMenorIdade);


    for (i = 0; i < n; i++)
    {
        if( vetIdade[i] < 16)
        {
            printf("\n%s",vetNome[i]);
        }
    }
    return 0;
}
