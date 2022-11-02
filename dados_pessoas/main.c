#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i = 0, n = 0, j = 0, totalHomens = 0, totalMulher = 0, temMulher = 0;
    double menorAltura = 0, maiorAltura = 0, somaAlturaMulheres = 0, mediaAlturaMulheres = 0;


    do
    {
        printf("Quantas pessoas serao digitadas? ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 10);

    double vetAltura[n];
    char vetGenero[n];


    for(i = 0; i < n; i++)
    {
        printf("Altura da %da pessoa: ", i +1 );
        scanf("%lf", &vetAltura[i]);

        do
        {
            printf("Genero da %da pessoa: ", i + 1);
              scanf(" %c", &vetGenero[i]);


        }
        while(toupper(vetGenero[i]) != 70 && toupper(vetGenero[i]) != 77 );
        printf("\n");
    }

    menorAltura  =   vetAltura[0];
    menorAltura  =  vetAltura[0];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (vetAltura[i] <= vetAltura[j] && vetAltura[i] <= menorAltura)
            {
                menorAltura =  (vetAltura[i]);
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (vetAltura[i] >= vetAltura[j] && vetAltura[i] >= maiorAltura)
            {
                maiorAltura =  (vetAltura[i]);
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(toupper(vetGenero[i]) == 70)
        {
            somaAlturaMulheres = somaAlturaMulheres +  vetAltura[i];
            temMulher = 1;
            totalMulher = totalMulher + 1;
        }
        if(toupper(vetGenero[i]) == 77)
        {
            totalHomens =  totalHomens + 1;
        }
    }



    printf("\nMenor altura = %.2lf",  menorAltura);
    printf("\nMaior altura = %.2lf",  maiorAltura);

    if(temMulher == 1)
    {
        mediaAlturaMulheres =  somaAlturaMulheres /  totalMulher;
        printf("\nMedia das alturas das mulheres = %.2lf",  mediaAlturaMulheres);
    }
    else
    {

        printf("\nNão foi possivel calcular media, mão há mulheres informadas");
    }

    printf("\nNumero de homens = %d \n",   totalHomens);


    return 0;
}
