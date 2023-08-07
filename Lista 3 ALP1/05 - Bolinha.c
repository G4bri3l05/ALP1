#include <stdio.h>
#include <math.h>

int main()
{
    // Calculo da velocidade a cada segundo
    int V0 = 0, G = 10, T = 7;
    float V1 = 0;

    for (int i = 0; i <= T; i++)
    {
        V1 = V0 + (G * i);
        printf("A velocidade da bolinha no segundo %d e de %.2f m/s\n", i, V1);
    }

    printf("\n");

    // Calculo da distancia a cada segundo
    float H0 = 0, H = 0;

    for (int i = 0; i <= T; i++)
    {
        H = H0 + (V0 * i) + (0.5 * G * pow(i, 2));
        printf("A distancia percorrida pela bolinha no segundo %d e de %.2f m\n", i, H);
    }

    // Nomeie as variaveis de acordo com a formula para deixar o codigo mais "limpo"
}