#include <stdio.h>

/**
 * main - adition
 *
 * Return: 0
 */

int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c;
	int i;

	for (i = 2; i < 101; i++)
	{
		if (i <= 1)
		{
			c = i;
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%lu", c);
		if (i != 99)
		{
			printf(", ");
		}
		if (i == 98)
		{
			printf("\n");
		}
	}
	return (0);
}
