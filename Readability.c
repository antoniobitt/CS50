#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int compute_letters(string texto);
int compute_words(string texto);
int compute_sentences(string texto);

int main(void)
{
    // Get input words from both players
    string texto = get_string("Texto: ");

    // Score letters, words, sentences
    int letters = compute_letters(texto);
    int words = compute_words(texto);
    int sentences = compute_sentences(texto);

    printf("%i letra(s)\n", letters);
    printf("%i palavra(s)\n", words);
    printf("%i frase(s)\n", sentences);
    
    float w = (float)words / 100;
    float l = (float)letters / w;
    float s = (float)sentences / w;
    float serie = (float) 0.0588 * l - 0.296 * s - 15.8;
    {
        if (serie < 1)
        {
            printf("Before Grade 1\n");
        }
        else if (serie > 16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %i\n", (int) round(serie));
        }
    }
}

int compute_letters(string texto)
{
    int letras = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (isalpha(texto[i]))
        {
            letras += 1;
        }
    }
    return letras;
}

int compute_words(string texto)
{
    int palavras = 1;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (isspace(texto[i]))
        {
            palavras += 1;
        }
    }
    return palavras;
}

int compute_sentences(string texto)
{
    int frases = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
        {
            frases += 1;
        }
    }
    return frases;
}