#include "main.h"

/**
 * _strspn - check the code
 * @s : oui
 * @accept : oui
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
		a++;
	}
	return (c);
}
