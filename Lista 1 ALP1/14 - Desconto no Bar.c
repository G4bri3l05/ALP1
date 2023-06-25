#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num_pessoas, desconto, valor_gasto, valor_por_pessoa, valor_desconto, valor_final;

    desconto = 0.10;

    printf("Digite o numero de pessoas na mesa: ");
    scanf("%f", &num_pessoas);

    printf("Digite o valor total gasto: ");
    scanf("%f", &valor_gasto);

    // Calcula o valor do desconto, o valor final e o valor por pessoa
    valor_desconto = valor_gasto * desconto;
    valor_final = valor_gasto - valor_desconto;
    valor_por_pessoa = valor_final / num_pessoas;

    // Mostra os resultados
    printf("\nValor do desconto: R$ %.2f", valor_desconto);
    printf("\nValor final: R$ %.2f", valor_final);
    printf("\nValor por pessoa: R$ %.2f\n", valor_por_pessoa);

    system("pause");
    return 0;
}