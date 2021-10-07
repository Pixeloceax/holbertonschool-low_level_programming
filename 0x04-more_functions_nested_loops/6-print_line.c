#include "main.h"

/**
 * print_line - print line
 * @n: int
 * Return: multipe
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
