#include "main.h"

/**
 * print_times_table - table for 3, 5 and 12
 *
 * @n: int
 *
 * Return: table of 3, 5 and 12
 */

void print_times_table(int n)
{
	int j, i, l;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);
				l = i * j;
				if (l <= 99)
				{
					_putchar(32);
				}
				if (l <= 9)
				{
					_putchar(32);
				}
				if (l >= 100)
				{
					_putchar((l / 100) + 48);
					_putchar(((l / 10)) % 10 + 48);
				}

				else if (l <= 99 && l >= 10)
				{
					_putchar((l / 10) + 48);
				}
				_putchar((l % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
