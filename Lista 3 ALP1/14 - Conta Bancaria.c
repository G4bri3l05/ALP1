#include <stdio.h>
#include <stdlib.h>
#define LIMPAR system("cls");

int main()
{
    int Opcao;
    float Saldo = 0, Deposito = 0, Saque = 0;

    printf("Bem-vindo ao caixa!\nO que deseja fazer?\n");
    printf("\n1 - Saldo\n2 - Deposito\n3 - Saque\n0 - Sair\n\nOpcao: ");
    scanf("%d", &Opcao);
    LIMPAR;

    while (Opcao != 0)
    {
        if (Opcao == 1)
        {
            printf("Seu saldo atual e de R$ %.2f", Saldo);
            printf("\n");
        }
        else if (Opcao == 2)
        {
            printf("Digite o valor a ser depositado: R$ ");
            scanf("%f", &Deposito);
            Saldo = Saldo + Deposito;
            printf("Seu novo saldo e de R$ %.2f\n", Saldo);
            Deposito = 0;
        }
        else
        {
            printf("Digite o valor a ser sacado: R$ ");
            scanf("%f", &Saque);
            Saldo = Saldo - Saque;
            printf("Seu novo saldo e de R$ %.2f\n", Saldo);
            Saque = 0;
        }

        printf("\n1 - Saldo\n2 - Deposito\n3 - Saque\n0 - Sair\n\nOpcao: ");
        scanf("%d", &Opcao);
        LIMPAR;
    }

    printf("Obrigado por usar nosso sistema\n");
}