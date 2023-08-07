#include <stdio.h>

int main()
{
    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    // Quantidade de palavras no nome
    int palavras = 1;

    for (int i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] == ' ')
        {
            palavras++;
        }
    }

    printf("Seu nome tem %d palavras.\n", palavras);

    // Quantidade de letras do nome sem os espaços (não conta o \0)
    int tamanho = 0;

    for (int i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] != ' ')
        {
            tamanho++;
        }
    }

    tamanho--; // Remove o caractere nulo do final

    printf("Seu nome tem %d letras.\n", tamanho);

    // Primeiro nome
    int i = 0;

    while (nome[i] != ' ')
    {
        printf("%c", nome[i]);
        i++;
    }

    return 0;
}