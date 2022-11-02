#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x=0, n=0, dentro=0, fora=0, i=0;


    do
    {
        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            printf("Digite um numero: ");
            scanf("%d", &x);

            if (x >= 10 && x <= 20)
            {
                dentro = dentro + 1;
            }
            else
            {
                fora = fora + 1;
            }
        }


        printf("%d dentro \n", dentro);
        printf("%d fora \n", fora);
    }
    while( x != 0);

    return 0;
}
