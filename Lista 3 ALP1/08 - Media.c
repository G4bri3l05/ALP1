#include <stdio.h>
#include <stdlib.h>

// Calcular quantidade, e percentual de alunos aprovados e media das notas da turma.

int main()
{
    float N1 = 0, N2 = 0, MediaAlunos = 0, Aprovados = 0, Reprovados = 0, MediaTurma = 0, PrctAprovados, PrctReprovados;
    int TamanhoTurma;

    printf("Digite o tamanho da turma: ");
    scanf("%d", &TamanhoTurma);

    for (int i = 0; i < TamanhoTurma; i++)
    {
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &N1);

        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &N2);

        system("cls");

        MediaAlunos = (N1 + N2) / 2;

        if (MediaAlunos >= 6)
        {
            Aprovados++;
        }
        else
        {
            Reprovados++;
        }

        MediaTurma += MediaAlunos;
    }

    // Calcula o percentual de alunos aprovados e reprovados
    PrctAprovados = (Aprovados / TamanhoTurma) * 100;
    PrctReprovados = (Reprovados / TamanhoTurma) * 100;

    printf("\nA quantidade de alunos aprovados e de %.0f\n", Aprovados);
    printf("O percentual de alunos aprovados e de %.2f%%\n", PrctAprovados);

    printf("\nA quantidade de alunos reprovados e de %.0f\n", Reprovados);
    printf("O percentual de alunos reprovados e de %.2f%%\n", PrctReprovados);

    printf("\nA media da turma e de %.2f\n", MediaTurma / TamanhoTurma);

    return 0;
}