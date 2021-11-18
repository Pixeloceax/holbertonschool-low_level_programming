#include "main.h"

/**
 *clear_bit - function
 *@n: n
 *@index: index
 *Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
