#include "main.h"

/**
 * more_numbers - more numbers
 * Return: multipe
 */

void more_numbers(void)
{
	int c;
	int a;

	for (a = 48; a <= 57; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
