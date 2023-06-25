#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (H/M): ");
    scanf(" %c", &sexo);

    switch (sexo)
    {
    case 'H':
    case 'h':
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal eh: %.2f\n", pesoIdeal);
        break;
    case 'M':
    case 'm':
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh: %.2f\n", pesoIdeal);
        break;
    default:
        break;
    }

    system("pause");
    return 0;
}