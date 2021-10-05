#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print
 *
 * @n: int
 *
 * Return: print
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n > 98)
	{
		while (n > 97)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	printf("\n");
}
