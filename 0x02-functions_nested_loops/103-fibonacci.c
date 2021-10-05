#include <stdio.h>

/**
 * main - nombre d'or
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c;
	float d;

	while (1)
	{
		c = a + b;
		if (c > 4000000)
			break;

		if ((c % 2) == 0)
			d += c;

		a = b;
		b = c;
	}
	printf("%.0f\n", d);
	return (0);
}
