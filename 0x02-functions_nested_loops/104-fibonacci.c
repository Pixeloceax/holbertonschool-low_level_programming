#include <stdio.h>

/**
 * main - adition
 *
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long a = 0, b = 1, i;
	unsigned long m1a, m1b, m2a, m2b;
	unsigned long ma, mb;

	for (count = 0; count < 92; count++)
	{
		i = a + b;
		printf("%lu, ", i);

		a = b;
		b = i;
	}
	m1a = a / 10000000000;
	m2a = b / 10000000000;
	m1b = a % 10000000000;
	m2b = b % 10000000000;
	for (count = 93; count < 99; count++)
	{
		ma = m1a + m2a;
		mb = m1b + m2b;
		if (m1b + m2b > 9999999999)
		{
			ma += 1;
			mb %= 10000000000;
		}
		printf("%lu%lu", ma, mb);
		if (count != 98)
		{
			printf(", ");
		}
		m1a = m2a;
		m1b = m2b;
		m2a = ma;
		m2b = mb;
	}
	printf("\n");
	return (0);
}
