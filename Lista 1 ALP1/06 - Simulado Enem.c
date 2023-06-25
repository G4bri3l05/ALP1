#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base_comum, profissionalizante, redacao;
    float peso_base_comum, peso_profissionalizante, peso_redacao;
    int questoes_base_comum, questoes_profissionalizante;

    // Peso de cada prova
    peso_base_comum = 5;
    peso_profissionalizante = 2.5;
    peso_redacao = 2.5;

    // Numero de questoes de cada prova
    questoes_base_comum = 45;
    questoes_profissionalizante = 25;

    // Pede as notas do usuario
    printf("Digite o numero de questoes acertadas na prova de base comum: ");
    scanf("%f", &base_comum);

    printf("\nDigite o numero de questoes acertadas na prova profissionalizante: ");
    scanf("%f", &profissionalizante);

    printf("\nDigite a nota da redacao: ");
    scanf("%f", &redacao);

    // Calcula o percentual de acertos de cada prova
    printf("\nPercentual de acertos na prova de base comum: %.2f%%", (base_comum / questoes_base_comum) * 100);
    printf("\nPercentual de acertos na prova profissionalizante: %.2f%%", (profissionalizante / questoes_profissionalizante) * 100);
    printf("\nPercentual com todos os acertos: %.2f%%\n", ((base_comum + profissionalizante) / (questoes_base_comum + questoes_profissionalizante)) * 100);

    // Calcula as notas de acordo com o peso de cada prova
    base_comum = ((base_comum / questoes_base_comum) * peso_base_comum);
    profissionalizante = ((profissionalizante / questoes_profissionalizante) * peso_profissionalizante);
    redacao = (redacao * peso_redacao) / 10;

    // Mostra a nota final do usuario arredondada para baixo
    printf("\nSua nota final e de: %.0f\n", floor(base_comum + profissionalizante + redacao));

    system("pause");
    return 0;
}