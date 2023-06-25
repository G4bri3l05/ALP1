#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float custo_inicial, valor_repassado, valor_venda, lucro_empresa, lucro_dona_conceicao;

    printf("Digite o custo inicial das roupas em R$: ");
    scanf("%f", &custo_inicial);

    // Calcula o valor repassado para o cliente e o valor de venda
    valor_repassado = custo_inicial + (custo_inicial * 0.50);
    valor_venda = valor_repassado + (valor_repassado * 0.35);

    // Mostra os resultados
    printf("\nValor vendido para a Dona Conceicao: R$ %.2f", valor_repassado);
    printf("\nValor de venda para o cliente: R$ %.2f", valor_venda);

    // Calcula o lucro da empresa e o lucro da dona conceição
    lucro_empresa = valor_repassado - custo_inicial;
    lucro_dona_conceicao = valor_venda - valor_repassado;

    // Mostra os resultados
    printf("\n\nLucro da empresa: R$ %.2f", lucro_empresa);
    printf("\nLucro da Dona Conceicao: R$ %.2f\n", lucro_dona_conceicao);

    system("pause");
    return 0;
}