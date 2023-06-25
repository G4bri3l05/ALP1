#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float distancia;

    // Pede ao usuario que digite as coordenadas dos pontos 1 e 2 no plano cartesiano
    printf("Digite as coordenadas do ponto 1: ");
    scanf("%f %f", &x1, &y1);

    printf("\nDigite as coordenadas do ponto 2: ");
    scanf("%f %f", &x2, &y2);

    // Calcula a distancia entre os pontos usando a formula da distancia entre dois pontos no plano cartesiano
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprime a distancia entre os pontos
    printf("\nDistancia entre os pontos: %.2f\n", distancia);

    system("pause");
    return 0;
}