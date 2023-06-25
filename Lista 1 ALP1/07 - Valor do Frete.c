#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia_total, valor_pedagio, valor_hora, valor_km, valor_total;
    int tipo_rodovia;

    // Pede os dados do usuario
    printf("Digite a distancia total da viagem em Km: ");
    scanf("%f", &distancia_total);

    printf("\nDigite o valor do pedagio em R$: ");
    scanf("%f", &valor_pedagio);

    printf("\nDigite o valor da hora do motorista em R$: ");
    scanf("%f", &valor_hora);

    printf("\nDigite o valor por Km rodado em R$: ");
    scanf("%f", &valor_km);

    printf("\nDigite o tipo de rodovia ( 1 - Nacional, 2 - Estadual, 3 - Municipal ): ");
    scanf("%d", &tipo_rodovia);

    // Calcula o valor total da viagem de acordo com o tipo de rodovia escolhido pelo usuario
    switch (tipo_rodovia)
    {
    case 1:
        valor_total = distancia_total * valor_km + valor_pedagio + valor_hora * 2;
        break;
    case 2:
        valor_total = distancia_total * valor_km + valor_pedagio + valor_hora * 1.5;
        break;
    case 3:
        valor_total = distancia_total * valor_km + valor_pedagio + valor_hora * 1;
        break;
    default:
        printf("Tipo de rodovia invalido!");
        break;
    }

    // Mostra o valor total da viagem
    printf("\nValor total da viagem: R$ %.2f\n", valor_total);

    system("pause");
    return 0;
}
