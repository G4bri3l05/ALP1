#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area;
    int num_pessoas, num_aparelhos;
    int BTUArea, BTUPessoas, BTUAparelhos, BTUTotal;
    float ResultadoArea, ResultadoPessoas, ResultadoAparelhos;

    // Pede ao usuario que digite os valores
    printf("Qual a area do ambiente em metros quadrados?: ");
    scanf("%f", &area);

    printf("\nQuantas pessoas ficaram no ambiente?: ");
    scanf("%d", &num_pessoas);

    printf("\nQuantos aparelhos ficaram ligados?: ");
    scanf("%d", &num_aparelhos);

    // Atribui os valores de BTU para cada variavel
    BTUArea = 500;
    BTUPessoas = 600;
    BTUAparelhos = 300;

    // Calcula o resultado de cada variavel
    ResultadoArea = area * BTUArea;
    ResultadoPessoas = num_pessoas * BTUPessoas;
    ResultadoAparelhos = num_aparelhos * BTUAparelhos;

    // Calcula o resultado total
    BTUTotal = ResultadoArea + ResultadoPessoas + ResultadoAparelhos;

    // Mostra o resultado
    printf("\nVoce precisara de %d BTUs para refrigerar o ambiente.\n", BTUTotal);

    system("pause");
    return 0;
}