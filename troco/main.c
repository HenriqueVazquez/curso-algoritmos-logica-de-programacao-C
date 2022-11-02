#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{
    double  precoProduto = 0,
            quantidade = 0,
            pagamento = 0,
            troco = 0;

    printf("Caixa:");
    printf("\nPreco unitario do produto: ");
    scanf("%lf", &precoProduto);

    printf("\nQuantidade comprada: ");
    limpar_entrada();
    scanf("%lf", &quantidade);
    printf("\nDinheiro recebido: ");
    limpar_entrada();
    scanf("%lf", &pagamento);

    troco = pagamento - precoProduto * quantidade;




    printf("troco = R$ %.2lf", troco);

    return 0;
}
