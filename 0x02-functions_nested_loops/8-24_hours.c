#include "main.h"

/**
 * jack_bauer - oui
 *
 * @n: variable
 *
 * Return: 1 is lower and upper case 0 to the other
 */

void jack_bauer(int n)
{

int a = 0;
	int b = 0;

	while (a < 24)
	{
		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(58);
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}
}
