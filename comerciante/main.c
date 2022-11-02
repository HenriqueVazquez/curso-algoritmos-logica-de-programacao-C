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
    int i = 0, n = 0, lucroMenor10 = 0, lucroEntre10e20 = 0, lucroAcima20 = 0;
    double valorTotalCompra = 0, valorTotalVenda = 0, valorTotalLucro = 0;

    do
    {
        printf("Serao digitados dados de quantos produtos? ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 10);

    char vetNome[n][50];
    double vetPrecoCompra[n];
    double vetPrecoVenda[n];
    double vetLucro[n];

    for(i = 0; i < n; i++)
    {
        printf("Produto %d: \n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(vetNome, 50);


        printf("Preco de compra: ");
        scanf("%lf", &vetPrecoCompra[i]);

        printf("Preco de venda: ");
        scanf("%lf", &vetPrecoVenda[i]);
        printf("\n");
    }


    for(i = 0; i < n; i++)
    {
        vetLucro[i] = ((vetPrecoVenda[i] * 100) / vetPrecoCompra[i]) - 100;
    }

    for(i = 0; i < n; i++)
    {
        if(vetLucro[i] <  10)
        {
            lucroMenor10 = lucroMenor10 + 1;
        }
        else if (vetLucro[i] >= 10 && vetLucro[i] < 20)
        {
            lucroEntre10e20 = lucroEntre10e20 + 1;
        }
        else
        {

            lucroAcima20 = lucroAcima20 + 1;

        }
    }


    for(i = 0; i < n; i++)
    {
        valorTotalCompra = valorTotalCompra +   vetPrecoCompra[i];
        valorTotalVenda = valorTotalVenda + vetPrecoVenda[i];

    }

        valorTotalLucro = valorTotalVenda - valorTotalCompra;

        printf("\nRELATORIO: ");
        printf("\nLucro abaixo de 10%%: %d", lucroMenor10);
        printf("\nLucro entre 10%% e 20%%: %d", lucroEntre10e20);
        printf("\nLucro acima de 20%%: %d", lucroAcima20);
        printf("\nTotal de compra: %.2lf", valorTotalCompra);
        printf("\nValor total de venda: %.2lf", valorTotalVenda);
        printf("\nLucro total: %.2lf \n", valorTotalLucro);



        return 0;
    }
