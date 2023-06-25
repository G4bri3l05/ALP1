#include <stdio.h>
#include <stdlib.h>

int main()
{
    float AvBimestral, Simulado, Trabalho;
    float nota1, nota2, nota3;
    float Media;

    // Atribui os valores para cada variavel
    AvBimestral = 6;
    Simulado = 2;
    Trabalho = 2;

    // Pede ao usuario que digite os valores de cada nota
    printf("Digite sua nota na Avaliacao: ");
    scanf("%f", &nota1);

    printf("\nDigite sua nota no Simulado: ");
    scanf("%f", &nota2);

    printf("\nDigite sua nota de Trabalhos: ");
    scanf("%f", &nota3);

    // Calcula a media final
    Media = (nota1 * AvBimestral + nota2 * Simulado + nota3 * Trabalho) / (AvBimestral + Simulado + Trabalho);

    // Mostra o resultado da media final
    printf("\nSua Media final e de: %.2f\n", Media);

    system("pause");
    return 0;
}