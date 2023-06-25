#include <stdio.h>

int main()
{
    int codigo;

    printf("Digite o codigo do cargo (1 a 4): ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Cargo: Escriturario\nPercentual de aumento: 50%%");
        break;
    case 2:
        printf("Cargo: Secretario\nPercentual de aumento: 35%%");
        break;
    case 3:
        printf("Cargo: Caixa\nPercentual de aumento: 20%%");
        break;
    case 4:
        printf("Cargo: Gerente\nPercentual de aumento: 10%%");
        break;
    default:
        printf("Codigo invalido");
        break;
    }

    return 0;
}