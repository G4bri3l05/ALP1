#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Laboratorio, AvSemestral, Exame, media;
    int PesoLaboratorio = 2, PesoAvSemestral = 3, PesoExame = 5;

    printf("Digite a nota do Laboratorio: ");
    scanf("%f", &Laboratorio);

    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &AvSemestral);

    printf("Digite a nota do Exame Final: ");
    scanf("%f", &Exame);

    media = ((Laboratorio * PesoLaboratorio) + (AvSemestral * PesoAvSemestral) + (Exame * PesoExame)) / (PesoLaboratorio + PesoAvSemestral + PesoExame);

    printf("A media do aluno eh: %.2f\n", media);

    if (media >= 6.0)
    {
        printf("O aluno foi aprovado\n");
    }
    else if (media >= 4.0 && media < 6.0)
    {
        printf("O aluno esta de exame\n");
    }
    else
    {
        printf("O aluno foi reprovado\n");
    }

    system("pause");
    return 0;
}