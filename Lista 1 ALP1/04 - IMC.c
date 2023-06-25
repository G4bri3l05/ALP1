#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso, IMC;

    printf("Qual sua altura?: ");
    printf("\nExemplo: 1.70\n");
    scanf("%f", &altura);

    printf("\nQual seu peso?: ");
    printf("\nExemplo: 70.5\n");
    scanf("%f", &peso);

    IMC = peso / (altura * altura);

    printf("\nSeu IMC e de %.2f\n", IMC);

    system("pause");
    return 0;
}