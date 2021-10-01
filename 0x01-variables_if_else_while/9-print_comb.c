#include <stdio.h>

/**
 * main - Main
 *
 * Return: 0
 */

int main(void)
{
int n = 48;
while (n <= 57)
{
if (n > 48)
{
putchar(',');
putchar(' ');
}
putchar(n);
n++;
}
putchar ('\n');
return (0);
}
