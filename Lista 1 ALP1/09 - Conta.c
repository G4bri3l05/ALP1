#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Carlos, Andre;
    float Felipe;
    float conta;

    printf("Digite o valor da conta: ");
    scanf("%f", &conta);

    // Carlos e Andre não pagaram os centavos da conta
    Carlos = (int)(conta / 3);
    Andre = Carlos;

    // Felipe pagou os centavos da conta
    Felipe = conta - (Carlos + Andre);

    printf("Carlos: R$ %d\n", Carlos);
    printf("Andre: R$ %d\n", Andre);
    printf("Felipe: R$ %.2f\n", Felipe);

    system("pause");
    return 0;
}