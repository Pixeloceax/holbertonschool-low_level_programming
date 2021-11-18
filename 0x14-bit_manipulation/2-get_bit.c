#include "main.h"
/**
 *get_bit- Get the bit object
 *@n: n
 *@index: index
 *Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (n == 0)
	{
		return (0);
	}


	if (index < 32)
	{
		i = (n >> index) & 1;
	return (i);
	}
	else
		return (-1);

}
