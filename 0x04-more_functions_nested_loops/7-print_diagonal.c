#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
    int a;
    int b;

    if (n > 0)
    {
        for ( a = 0; a < n; a++)
        {
            b = a;
            while (b > 0)
            {
                _putchar(' ');
                b--;
            }
            _putchar('\\');
            _putchar('\n');            
        }
        
    }
    else
    {
        _putchar('\n');
    }
}

   
    
 