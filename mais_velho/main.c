#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int i =0, n = 0, j = 0,  posicaoMaisVelho = 0;

    do
    {
        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 10);

    int vetIdade[n];
    char vetNome[n][50];

    for(i = 0; i < n; i++)
    {
        printf("Dados da %d a pessoa: ", i +1);
        limpar_entrada();
        printf("\nNome: ");
        ler_texto(vetNome[i], 50);

        printf("Idade: ");
        scanf("%d", &vetIdade[i]);
        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(vetIdade[i]  >= vetIdade[j] && vetIdade[i] >= vetIdade[posicaoMaisVelho])
            {
                posicaoMaisVelho = i;
            }
        }
    }

    printf("PESSOA MAIS VELHA:  %s \n", vetNome[posicaoMaisVelho]);
    return 0;
}
