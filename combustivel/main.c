#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Gasolina = 0, Alcool = 0, Diesel = 0, codigo = 0;



    do
    {

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);

        while (codigo < 1 || codigo > 4)
        {
            printf("Informe um codigo valido (1, 2, 3) ou 4 para parar: ");
            scanf("%d", &codigo);
        }


        switch(codigo)
        {
        case 1:
            Alcool = Alcool +1;
            break;
        case 2:
            Gasolina = Gasolina +1;
            break;
        case 3:
            Diesel = Diesel +1;
            break;

        }




    }
    while(codigo != 4);



    printf("MUITO OBRIGADO");
    printf("\n1- Alcool: %d", Alcool);
    printf("\n2- Alcool: %d", Gasolina);
    printf("\n3- Diesel: %d", Diesel);

    return 0;
}
