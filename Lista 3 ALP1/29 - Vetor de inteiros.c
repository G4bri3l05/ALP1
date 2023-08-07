#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int vetor[10];

    printf("Digite 10 numeros positivos maiores que zero:\n");

    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Digite o valor do elemento %d: ", i + 1);
            scanf("%d", &vetor[i]);
        } while (vetor[i] <= 0);
    }

    // Libera a primeira posição do vetor
    for (int i = 0; i < 9; i++)
    {
        vetor[i] = vetor[i + 1];
    }

    // Vai exibir o vetor sem o primeiro elemento
    printf("Vetor resultante:\n");

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    // Busca um valor no vetor e exibe quantas vezes ele aparece
    int valor, ocorrencias = 0;

    printf("Digite um valor para buscar no vetor: ");
    scanf("%d", &valor);

    for (int i = 0; i < 9; i++)
    {
        if (vetor[i] == valor)
        {
            ocorrencias++;
        }
    }

    printf("O valor %d aparece %d vezes no vetor.\n", valor, ocorrencias);

    return 0;
}