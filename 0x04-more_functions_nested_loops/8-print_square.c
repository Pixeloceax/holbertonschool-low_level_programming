#include "main.h"

/**
 * print_square - check the code
 *@size: comment
 * Return: Always 0.
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = size;
			while (b > 0)
			{
				_putchar('#');
				b--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
