#include <stdio.h>

int main()
{
    int palavras = 1, vogais = 0, numeros[50];
    char frase[50];

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            palavras++;
        }

        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            vogais++;
        }
    }
    printf("A frase tem %d palavras e %d vogais.\n", palavras, vogais);
    
    // Apresenta os numeros presentes frase
    int j = 0;
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] >= '0' && frase[i] <= '9')
        {
            numeros[j] = frase[i];
            j++;
        }
    }

    printf("Numeros presentes na frase: ");
    for (int i = 0; i < j; i++)
    {
        printf("%c ", numeros[i]);
    }
}