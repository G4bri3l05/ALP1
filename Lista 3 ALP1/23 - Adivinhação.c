#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int Tentativas = 0, Num;
    bool Acertou = false;

    srand(time(NULL)); // Inicializa o gerador de numeros

    Num = rand() % 101; // Gera um numero aleatorio entre 0 e 100

    printf("Digite um numero de 1 a 100, voce tem 6 tentativas.\n");
    for (int i = 1; i <= 6; i++)
    {
        printf("Tentativa %d: ", i);
        scanf("%d", &Tentativas);

        if (Tentativas == Num)
        {
            printf("Parabens, voce acertou! :D \n");
            Acertou = true;
        }
        else if (Num - Tentativas <= 10)
        {
            printf("Voce esta quente\n");
        }
        else if (Num - Tentativas >= 10)
        {
            printf("Voce esta frio\n");
        }
        
        if (Tentativas > Num)
        {
            printf("O numero e menor que %d.\n", Tentativas);
        }
        else if (Tentativas < Num)
        {
            printf("O numero e maior que %d.\n", Tentativas);
        }
        
        if (i == 6 && Acertou == false)
        {
            printf("\nSuas tentativas acabaram, o numero era %d\n", Num);
        }

        printf("\n");
    }
}