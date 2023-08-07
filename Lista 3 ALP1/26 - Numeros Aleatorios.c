#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int NumAleatorio1 = 0, NumAleatorio2 = 0, N1, N2, Tentativas = 0;

    srand(time(NULL)); // Inicializa o gerador de numeros

    printf("Digite um numero de 1 a 75 para o N1.\n");
    scanf("%d", &N1);

    printf("Digite um numero de 1 a 75 para o N2.\n");
    scanf("%d", &N2);

    // Gera numeros aleatorios ate que os numeros gerados sejam iguais aos numeros digitados pelo usuario
    while (NumAleatorio1 != N1 || NumAleatorio2 != N2)
    {

        NumAleatorio1 = (rand() % 75) + 1; // Gera um numero aleatorio entre 1 e 75
        NumAleatorio2 = (rand() % 75) + 1; // Gera um numero aleatorio entre 1 e 75

        printf("Numero aleatorio 1: %d\n", NumAleatorio1);
        printf("Numero aleatorio 2: %d\n", NumAleatorio2);
        printf("\n");
        // Não pretendia colocar esse print, mas era o que estava no enunciado.

        Tentativas++;
    }

    printf("Foram necessarias %d tentativas para gerar os numeros %d e %d.\n", Tentativas, N1, N2);
}
