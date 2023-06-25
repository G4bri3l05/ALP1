#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float kw, salario, valorKw, valorTotal, valorTotalDesconto;

    printf("Digite o valor do salario minimo em R$: ");
    scanf("%f", &salario);

    printf("\nDigite a quantidade de Kw gastos: ");
    scanf("%f", &kw);

    valorKw = salario / 700;
    valorTotal = kw * valorKw;
    valorTotalDesconto = valorTotal - (valorTotal * 0.1);

    printf("\nValor de cada Kw: R$%.2f", valorKw);
    printf("\nValor total a ser pago: R$%.2f", valorTotal);
    printf("\nValor total a ser pago com desconto: R$%.2f\n", valorTotalDesconto);

    system("pause");
    return 0;
}