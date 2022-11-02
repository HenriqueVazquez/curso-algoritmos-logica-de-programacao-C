#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0, i=0, qte=0, totalCobaias=0, totalSapos=0, totalCoelhos=0, totalRatos=0, tipoCobaiaCorreto=0;
    double pratos=0, psapos=0, pcoelhos=0;
    char tipoCobaia;


    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    while( N <= 0)
    {
        N = 0;
        printf("Digite um numero inteiro? ");
        scanf("%d", &N);
    }

    for(i = 1; i <= N; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qte);

        while(qte <= 0)
        {
            printf("Digite um numero inteiro? ");
            scanf("%d", &qte);
        }

        printf("Tipo de cobaias: ");
        scanf(" %c", &tipoCobaia);


        if(toupper(tipoCobaia) == 82)
        {
            tipoCobaiaCorreto = 1;
        }
        else if(toupper(tipoCobaia) == 83)
        {
            tipoCobaiaCorreto = 1;
        }
        else if( toupper(tipoCobaia) == 67)
        {
            tipoCobaiaCorreto = 1;
        }
        else
        {

        }





        while( tipoCobaiaCorreto == 0)
        {
            printf("Digite o tipo de cobaia correto:");
            printf("\nR para rato");
            printf("\nS para sapo");
            printf("\nC para coelho");
            printf("\nTipo de cobaia: ");
            scanf(" %c", &tipoCobaia);


            if(toupper(tipoCobaia) == 82)
            {
                tipoCobaiaCorreto = 1;
            }
            else if(toupper(tipoCobaia) == 83)
            {
                tipoCobaiaCorreto = 1;
            }
            else if( tipoCobaia == 67)
            {
                tipoCobaiaCorreto = 1;
            }
            else
            {
                tipoCobaiaCorreto = 0;
            }
        }






        if(toupper(tipoCobaia) == 82)
        {
            totalRatos = totalRatos + qte;
        }
        else if(toupper(tipoCobaia) == 83)
        {
            totalSapos = totalSapos + qte;
        }
        else if( toupper(tipoCobaia) == 67)
        {
            totalCoelhos = totalCoelhos + qte;
        }



    }

    totalCobaias = totalRatos + totalSapos + totalCoelhos;

    pcoelhos = (double) totalCoelhos / totalCobaias * 100.0;
    pratos = (double) totalRatos / totalCobaias * 100.0;
    psapos = (double) totalSapos / totalCobaias * 100.0;


    printf("\nRELATORIO FINAL:");
    printf("\nTotal: %d cobaias", totalCobaias);
    printf("\nTotal de coelhos: %d", totalCoelhos);
    printf("\nTotal de ratos: %d", totalRatos);
    printf("\nTotal de sapos: %d", totalSapos);
    printf("\nPercentual de coelhos: %.2lf", pcoelhos);
    printf("\nPercentual de ratos: %.2lf", pratos);
    printf("\nPercentual de sapos: %.2lf\n", psapos);

    return 0;
}
