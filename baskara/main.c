#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;
    a = 0;
    b = 0;
    c = 0;
    x1 = 0;
    x2= 0;
    delta= 0;
    printf("Coeficiente a: ");
    scanf("%lf", &a);

    printf("\nCoeficiente b: ");
    scanf("%lf", &b);

    printf("\nCoeficiente c: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (a == 0 || delta < 0)
    {
        printf("\nEsta equacao nao possui raizes reais");
    }
    else
    {
        x1 = ((-b) + sqrt(delta)) / (2 * a);
        x2 = ((-b) - sqrt(delta)) / (2 * a);

        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }
    return 0;
}

