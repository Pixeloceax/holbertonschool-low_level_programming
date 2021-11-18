#include "main.h"
/**
 *binary_to_uint - function
 *@b: b
 *Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numbers = 0, rep = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		numbers += (b[len] - '0') * rep;
		rep *= 2;
	}

	return (numbers);
}
