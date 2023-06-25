#include <stdio.h>

int main()
{
    int Idade;
    float Peso;

    printf("Digite a idade do paciente: ");
    scanf("%d", &Idade);

    printf("Digite o peso do paciente: ");
    scanf("%f", &Peso);

    if (Idade >= 12 && Peso >= 60.0)
    {
        printf("A dosagem eh de 40 gotas");
    }
    else if (Idade >= 12 && Peso <= 60.0)
    {
        printf("A dosagem eh de 35 gotas");
    }
    else if (Idade < 12 && Peso <= 9.0)
    {
        printf("A dosagem eh de 5 gotas");
    }
    else if (Idade < 12 && Peso >= 10 && Peso <= 16)
    {
        printf("A dosagem eh de 10 gotas");
    }
    else if (Idade < 12 && Peso >= 17 && Peso <= 24)
    {
        printf("A dosagem eh de 15 gotas");
    }
    else if (Idade < 12 && Peso >= 25 && Peso <= 30)
    {
        printf("A dosagem eh de 20 gotas");
    }
    else
    {
        printf("A dosagem eh de 30 gotas");
    }
    
    return 0;
}