#include <stdio.h>
#include <stdlib.h>

int main()
{
    float perimetro_terreno, altura_muro;
    float valor_metro_muro;
    int bloco;

    printf("Digite o perimetro do terreno: ");
    scanf("%f", &perimetro_terreno);

    printf("\nDigite a altura do muro: ");
    scanf("%f", &altura_muro);

    printf("\nBloco a ser utilizado:\n\n1 - Tradicional\n2 - Ceramica\n3 - Concreto\n");
    printf("\nDigite o numero do bloco: ");
    scanf("%d", &bloco);

    switch (bloco)
    {
    case 1:
        valor_metro_muro = 10.00;
        break;
    case 2:
        valor_metro_muro = 15.00;
        break;
    case 3:
        valor_metro_muro = 25.00;
        break;
    default:
        printf("Bloco invalido!\n");
        system("pause");
        return 0;
    }

    printf("\nValor total do muro: R$ %.2f\n", perimetro_terreno * altura_muro * valor_metro_muro);

    system("pause");
    return 0;
}