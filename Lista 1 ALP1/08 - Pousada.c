#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_diaria, valor_comida, valor_bebida, valor_total, desconto;
    int dias;

    valor_diaria = 50;

    printf("Digite o numero de dias que o cliente ficou hospedado: ");
    scanf("%d", &dias);

    printf("\nDigite o valor total gasto com comida em R$: ");
    scanf("%f", &valor_comida);

    printf("\nDigite o valor total gasto com bebidas em R$: ");
    scanf("%f", &valor_bebida);

    valor_total = dias * valor_diaria + valor_comida + valor_bebida;

    printf("\nPor favor, informe o desconto a ser aplicado em %%: ");
    scanf("%f", &desconto);

    valor_total -= valor_total * desconto / 100;

    printf("\nValor total da conta: R$%.2f\n", valor_total);

    system("pause");
    return 0;
}