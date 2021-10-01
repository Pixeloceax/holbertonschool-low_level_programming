#include <stdio.h>
/**
 * main - Main
 *
 * Return: 0
 */
int main(void)
{
int i = 48;
int j = 48;
int k = 0;
while (i < 58)
{
while (j < 58)
{
if (j != i)
{
putchar(i);
putchar(j);
if (i < 56)
{
putchar(',');
putchar(' ');
}
j++;
}
else
{
j++;
}
}
k = k + 1;
j = 48 + k;
i++;
}
putchar('\n');
return (0);
}
