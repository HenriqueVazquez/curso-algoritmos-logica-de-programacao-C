#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Digite um valor para a tabuada para ou digite 0 para sair?");
    scanf("%d", &n);;

    while( n != 0 )
    {
        for (i = 1; i <= 10; i++)
        {
            printf("\n%d X %d = %d",n,i, (n * i ));
        }
        printf("\nDigite um valor para a tabuada para ou digite 0 para sair?");
        scanf("%d", &n);
    }
    return 0;
}
