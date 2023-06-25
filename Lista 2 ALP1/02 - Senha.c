#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Senha;

    printf("Digite a senha: ");
    scanf("%d", &Senha);

    if (Senha == 2022)
    {
        printf("Acesso permitido\n");
    }
    else
    {
        printf("Acesso negado\n");
    }

    return 0;
}