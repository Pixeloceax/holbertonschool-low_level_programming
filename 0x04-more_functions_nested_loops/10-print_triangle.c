
#include "main.h"

/**
 * print_triangle - print triangle
 * @size: int
 * Return: multipe
 */

void print_triangle(int size)
{
	int a = 1;
	int b;

	if (size != 0)
	{
		while (a <= size)
		{
			b = 1;
			while (b <= size - a)
			{
				_putchar(' ');
				b++;
			}
			while (b <= size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
