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
    int  i = 0, n = 0,  somaAprovados = 0, temAprovado = 0;

    do
    {
        printf("Quantos alunos serao digitados? ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 10);

    double vetNota1[n], vetNota2[n], mediasNotas[n];
    char vetNome[n][50];


    for(i = 0; i < n; i++)
    {
        printf("Digite nome, primeira e segunda nota do %do aluno: \n", i + 1);
        limpar_entrada();
        ler_texto(vetNome[i], 50);
        scanf("%lf", &vetNota1[i]);
        scanf("%lf", &vetNota2[i]);
        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        mediasNotas[i] =  vetNota1[i] + vetNota2[i]/2;
    }

    for(i = 0; i < n; i++)
    {
        mediasNotas[i] =  (vetNota1[i] + vetNota2[i]) /2;
    }

    for(i = 0; i < n; i++)
    {
        if (mediasNotas[i] >= 6)
        {
            temAprovado  = 1;

        }
    }

    if(temAprovado == 1)
    {
        printf("Alunos aprovados: \n");
    }

    for(i = 0; i < n; i++)
    {
        if (mediasNotas[i] >= 6)
        {
            printf("%s\n", vetNome[i]);
        }
    }

    printf("\n");
    return 0;
}
