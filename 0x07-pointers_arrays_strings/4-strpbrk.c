#include "main.h"

/**
 * _strpbrk - check the code
 *@s : s
 *@accept : accept
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
