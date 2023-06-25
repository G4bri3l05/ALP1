#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 20)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc == 20 || imc <= 25)
    {
        printf("Peso Normal\n");
    }
    else if (imc > 25 || imc <= 30)
    {
        printf("Sobrepeso\n");
    }
    else if (imc > 30 || imc <= 40)
    {
        printf("Obesidade\n");
    }
    else if (imc > 40)
    {
        printf("Obesidade Morbida\n");
    }

    return 0;  
}