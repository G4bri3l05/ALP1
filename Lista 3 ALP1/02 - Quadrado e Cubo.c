#include <stdio.h>
#include <math.h>

int main()
{
    int Quadrado, Cubo;

    for (int i = 1; i <= 20; i++)
    {
        Quadrado = pow(i, 2);
        Cubo = pow(i, 3);

        printf("%d^2 = %d\n%d^3 = %d", i, Quadrado, i, Cubo);
        printf("\n\n");
    }
}