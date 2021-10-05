#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
    }
    
    for (int k = 0; k < strlen(argv[1]); k++)
    {
        if (isalpha(argv[1][k]))
        {
            printf("Usage: ./caesar key\n");
        }
    }
    
    int k = atoi(argv[1]) % 26;
    string plaintext = get_string("plaintext:  ");
    printf ("ciphertext: ");
    
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if(!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
            continue;
        }
        
        int ascci_offset = isupper(plaintext[i]) ? 'A' : 'a';
        
        int pi = plaintext[i] - ascci_offset;
        int ci = (pi + k) % 26;
        
        printf("%c", ci + ascci_offset);
    }
    
    printf("\n");
    
    
}