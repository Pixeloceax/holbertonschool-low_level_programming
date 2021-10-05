#include "main.h"

/**
 * print_sign - sign for number
 *
 * @n: variable
 *
 * Return: 1 is lower and upper case 0 to the other
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
