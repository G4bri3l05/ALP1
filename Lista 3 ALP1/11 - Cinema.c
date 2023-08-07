#include <stdio.h>
#include <stdlib.h>
#define LIMPAR system("cls");

int main()
{
    int ValorEntrada = 18, Criancas = 0, Idosos = 0, MeiaEntrada = 0, EntradaInteira = 0, Opcao = 0, Idade = 0;
    float ValorArrecadado = 0;

    printf("Bem vindo ao cinema!\n");
    printf("Digite 1 para comprar ingresso\n");
    printf("Digite 2 para sair\n");
    scanf("%d", &Opcao);
    LIMPAR;

    while (Opcao != 2)
    {
        printf("Digite a idade do cliente: ");
        scanf("%d", &Idade);
        printf("Obrigado pela compra!\n\n");
        system("pause");
        LIMPAR;

        if (Idade <= 12)
        {
            Criancas++;
            ValorArrecadado += ValorEntrada / 2;
            MeiaEntrada++;
        }
        else if (Idade >= 59)
        {
            Idosos++;
            ValorArrecadado += ValorEntrada / 2;
            MeiaEntrada++;
        }
        else
        {
            ValorArrecadado += ValorEntrada;
            EntradaInteira++;
        }

        printf("Digite 1 para comprar ingresso\n");
        printf("Digite 2 para sair\n");
        scanf("%d", &Opcao);
        LIMPAR;
    }

    if (Opcao == 2)
    {
        LIMPAR;
        printf("Obrigado por usar nosso sistema!\n");
        printf("O valor arrecadado foi de R$%.2f\n", ValorArrecadado);
        printf("O numero de criancas foi de %d\n", Criancas);
        printf("O numero de idosos foi de %d\n", Idosos);
        printf("O numero de meia entrada foi de %d\n", MeiaEntrada);
        printf("O numero de entradas inteiras foi de %d\n\n", EntradaInteira);
    }

    system("pause");
    return 0;
}