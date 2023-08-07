#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ValorCelular = 0, ValorAtual = 0, ValorFinal = 0, Desconto = 0, ValorRecebido = 0;
    int Atividades = 0, HorasTrabalhadas = 0;
    char Opcao;

    printf("Digite o valor do celular: R$ ");
    scanf("%f", &ValorCelular);

    printf("Qual o valor possuido atualmente: R$ ");
    scanf("%f", &ValorAtual);

    while (ValorAtual < ValorCelular)
    {
        printf("\nEscolha qual atividade deseja realizar.\nJ - Joao\nC - Cleusa\nB - Bia\nM - Mae");
        printf("\nAtividade: ");
        scanf(" %c", &Opcao);

        switch (Opcao)
        {
        case 'J':
        case 'j':
            ValorAtual += 50;
            ValorRecebido += 50;
            HorasTrabalhadas += 5;
            Atividades++;
            break;
        case 'C':
        case 'c':
            ValorAtual += 120;
            ValorRecebido += 120;
            HorasTrabalhadas += 18;
            Atividades++;
            break;
        case 'B':
        case 'b':
            ValorAtual += 60;
            ValorRecebido += 60;
            HorasTrabalhadas += 4;
            Atividades++;
            break;
        case 'M':
        case 'm':
            ValorAtual += 50;
            ValorRecebido += 50;
            HorasTrabalhadas += 3;
            Atividades++;
            break;
            default:
            printf("Opcao invalida! Tente novamente\n");
        }

    }

    // Calculos da compra do celular
    Desconto = ValorCelular * 0.05;
    ValorCelular -= Desconto;
    ValorFinal = ValorAtual - ValorCelular;

    // Saidas A, B, C e D
    printf("\n\nMaria fez %d atividades\n", Atividades);
    printf("Maria trabalhou %d Hrs\n", HorasTrabalhadas);
    printf("Maria arrecadou R$ %.2f\n", ValorRecebido);
    printf("Maria ficou com R$ %.2f depois da compra\n", ValorFinal);

    system("pause");
}