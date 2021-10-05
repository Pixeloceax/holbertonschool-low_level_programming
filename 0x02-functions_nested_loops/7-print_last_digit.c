#include "main.h"

/**
 * print_last_digit 
 *
 * @n: variable
 *
 * Return: 1 is lower and upper case 0 to the other
 */


int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
