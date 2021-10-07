#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a = 612852475143;
	long int factor = 2;
	int b = 0;

	while (a > 1)
	{
		while (a % factor == 0)
		{
			b = factor;
			a = a / factor;
		}
		factor++;
	}
	printf("%d\n", b);
	return (0);
}
