#include <stdio.h>
/**
 * main - Main
 *
 * Return: 0
 */
int main(void)
{
int n1 = 48;
while (n1 <= 57)
{
if (n1 <= 56)
{
putchar(',');
putchar(' ');
}
n1++;
putchar(n1);
}
return (0);
}
