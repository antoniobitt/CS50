#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int n, coluna, fileira, espacos;
    do
    {
        n = get_int("Altura: ");
    }
    while (n < 1 || n > 9);
    
    
      
    for (fileira = 0; fileira < n; fileira++)
    {
        
        for (espacos = 0; espacos < n - fileira - 1; espacos++)
        {
            printf(" ");
        }
        
        for (coluna = 0; coluna <= fileira; coluna++)
        
        {
            printf("#");
        }
        
        {
            printf("  ");
        }
        
        for (coluna = 0; coluna <= fileira; coluna++)
        
        {
            printf("#");
        }
        
        printf("\n");
    }
}