#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, vendas, comissao;

    printf("Qual seu salario?: ");
    scanf("%f", &salario);

    printf("\nQual o valor de suas vendas?: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.05;

    printf("\nSua comissao e de: %.2f", comissao);
    printf("\nSeu salario total e de: %.2f", salario + comissao);

    system("pause");
    return 0;
}