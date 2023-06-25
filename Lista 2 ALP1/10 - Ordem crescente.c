#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Ordem crescente: %d, %d", num1, num2);

    return 0;
}