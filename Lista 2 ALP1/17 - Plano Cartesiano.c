#include <stdio.h>
#include <math.h>

int main()
{
    float X, Y;

    printf("Digite a coordenada X: ");
    scanf("%f", &X);

    printf("Digite a coordenada Y: ");
    scanf("%f", &Y);

    if (X == 0 && Y == 0)
    {
        printf("O ponto esta na origem");
    }
    else if (X == 0 && Y != 0)
    {
        printf("O ponto esta sobre o eixo Y");
    }
    else if (X != 0 && Y == 0)
    {
        printf("O ponto esta sobre o eixo X");
    }
    else if (X > 0 && Y > 0)
    {
        printf("O ponto esta no primeiro quadrante");
    }
    else if (X < 0 && Y > 0)
    {
        printf("O ponto esta no segundo quadrante");
    }
    else if (X < 0 && Y < 0)
    {
        printf("O ponto esta no terceiro quadrante");
    }
    else
    {
        printf("O ponto esta no quarto quadrante");
    }

    return 0;
}