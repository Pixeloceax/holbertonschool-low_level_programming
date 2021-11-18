#include "main.h"

/**
 *get_endianness - Get the endianness object
 *Return: int
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
