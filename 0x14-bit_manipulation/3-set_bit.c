#include <stdio.h>

/**
 *set_bit - Set the bit object
 *@n: n
 *@index: index
 *Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	else
	{
		*n |= (1 << index);
		return (1);
	}

}
