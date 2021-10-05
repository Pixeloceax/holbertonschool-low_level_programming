#include "main.h"
/**
 * main - main
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char c;
int n;
while(n < 10)
{
for (c = 'a'; c <= 'z'; ++c)
  {
_putchar(c);
_putchar('\n');
n++;
  }
} 
}
