#include <stdio.h>
#include <stdlib.h>

int main()
{
    double custo_espetaculo, preco_convite, convite_vendido, prejuizo, perdeu, lucro, ganhou;
    int vendas_convite;

    // Atribui os valores para cada variavel
    custo_espetaculo = 10800;
    preco_convite = 600;
    convite_vendido = custo_espetaculo / preco_convite;

    // Mostra o resultado do custo do espetaculo e quantos convites precisam ser vendidos
    printf("O custo do espetaculo foi de R$%.0f\n", custo_espetaculo);
    printf("Sera preciso vender %.0f ingressos para cobrir o custo do espetaculo\n", convite_vendido);

    // Pede ao usuario que digite os valores de quantos convites foram vendidos
    printf("\nQuantos convites foram vendidos?: ");
    scanf("%d", &vendas_convite);

    if (vendas_convite < 18) // Se o usuario digitar um valor menor que 18 ele tera prejuizo
    {

        prejuizo = vendas_convite * preco_convite;
        perdeu = custo_espetaculo - prejuizo;

        printf("\nVoce nao conseguiu cobrir o custo do espetelaculo seu prejuizo foi de R$%.0f\n", perdeu);
    }
    else if (vendas_convite == 18) // Se o usuario digitar um valor igual a 18 ele nao tera lucro nem prejuizo
    {
        printf("\nVoce conseguiu cobrir o custo do espetaculo!\n");
        printf("\nPorem nao teve lucro nem prejuizo!\n");
    }
    else if (vendas_convite > 18) // Se o usuario digitar um valor maior que 18 ele tera lucro
    {

        lucro = vendas_convite * preco_convite;
        ganhou = lucro - custo_espetaculo;

        printf("\nVoce conseguiu cobrir o custo do espetaculo!\n");
        printf("\nVoce teve lucro de R$%.0f\n", ganhou);
    }

    system("pause");
    return 0;
}