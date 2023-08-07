#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Notas[40], Random;
    srand(time(NULL));

    for (int i = 0; i < 40; i++)
    {
        Random = rand() % 11;
        Notas[i] = Random;
    }

    // Calcula a frequencia absoluta e relativa de cada nota
    int Frequencia[11];
    float FrequenciaRelativa[11];

    for (int i = 0; i < 11; i++)
    {
        Frequencia[i] = 0;
        FrequenciaRelativa[i] = 0;
    }

    for (int i = 0; i < 40; i++)
    {
        Frequencia[Notas[i]]++;
    }

    for (int i = 0; i < 11; i++)
    {
        FrequenciaRelativa[i] = (float)Frequencia[i] / 40;
    }
    // Não sei se é assim que se calcula a frequencia relativa, mas foi o que eu entendi.

    //Apresenta a tabela
    printf("Nota\tFrequencia\tFrequencia Relativa\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t%d\t\t%.2f\n", i, Frequencia[i], FrequenciaRelativa[i]);
    }
}