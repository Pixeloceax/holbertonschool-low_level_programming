#include "main.h"

/**
 * times_table - table
 *
 * Return: table
 */

void times_table(void)
{
	int j, i, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			n = i * j;
			if (n <= 9)
			{
				_putchar(32);
			}
			else
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
