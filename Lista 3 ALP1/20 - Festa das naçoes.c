#include <stdio.h>
#include <stdlib.h>
#define LIMPAR system("cls");

int main()
{
    int QtdFichas2 = 0, QtdFichas5 = 0, QtdPessoas = 0, TotalFicha2 = 0, TotalFicha5 = 0, TotalPessoas = 0, Opcao = 1;
    float ValorFicha2 = 2, ValorFicha5 = 5, ValorTotal = 0;

    while (Opcao != 0)
    {
        printf("Deseja realizar uma venda?\n");
        printf("1 - Sim\n0 - Nao\n");
        printf("Opcao: ");
        scanf("%d", &Opcao);
        LIMPAR;

        if (Opcao == 1)
        {
            printf("Numero de clientes: ");
            scanf("%d", &QtdPessoas);

            printf("\nQuantidade de fichas de 2: ");
            scanf("%d", &QtdFichas2);

            printf("\nQuantidade de fichas de 5: ");
            scanf("%d", &QtdFichas5);

            TotalFicha2 += QtdFichas2;
            TotalFicha5 += QtdFichas5;
            TotalPessoas += QtdPessoas;

            LIMPAR;
        }
    }

    ValorTotal = (TotalFicha2 * ValorFicha2) + (TotalFicha5 * ValorFicha5);

    printf("Foram vendidos %d fichas de 2", TotalFicha2);
    printf("\nForam vendidos %d fichas de 5", TotalFicha5);
    printf("\n%d pessoas compraram fichas", TotalPessoas);
    printf("\nFoi vendido R$ %.2f no total", ValorTotal);
}