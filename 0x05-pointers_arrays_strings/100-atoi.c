#include "main.h"
#include <stdio.h>

/**
 * _atoi - print char
 * @s: char
 * Return: 0
 */

int _atoi(char *s)
{
	int c = 0;
	int si = 1;
	unsigned int n = 0;

	while ((s[c] > '9' || s[c] < '0') && s[c] != '\0')
	{
		if (s[c] == '-')
		{
			si *= -1;
		}
		c++;
	}
	while (s[c] <= '9' && s[c] >= '0')
	{
		n = n * 10 + (s[c] - '0');
		c++;
	}
	return (n * si);
}
