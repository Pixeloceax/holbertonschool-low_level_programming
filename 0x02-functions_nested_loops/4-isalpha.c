#include "main.h"

/**
 * _isalpha - lower case and upper case send 1
 *
 * @c: variable
 *
 * Return: 1 is lower and upper case 0 to the other
 */

int _isalpha(int c)
{
	if ((c > 65 && c < 90) || (c > 97 && c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
