#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x=0, i=0;


    do
    {
        printf("\nDigite o valor de X ou 0 para finalizar: ");
        scanf("%d", &x);

        for (i = 1; i <= x; i++)
        {
            if (i % 2 != 0 )
            {
                printf("%d\n",i);
            }
        }
    }
    while( x != 0);
    printf("\n");

    return 0;
}
