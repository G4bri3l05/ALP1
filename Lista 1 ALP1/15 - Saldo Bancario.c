#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposito_inicial, taxa_juros, saldo_total;
    int meses;

    taxa_juros = 0.05;

    printf("Digite o valor do deposito inicial: ");
    scanf("%f", &deposito_inicial);

    printf("\nDigite o numero de meses que o dinheiro ficou aplicado: ");
    scanf("%d", &meses);

    // Calcula o saldo total
    saldo_total = deposito_inicial * (1 + (taxa_juros / 100)) * meses;

    // Imprime o saldo total
    printf("\nO saldo total e: R$%.2f\n\n", saldo_total);

    system("pause");
    return 0;
}