#include "main.h"

/**
 * _strcat - check the code
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a, b, counter = 0;

	for (a = 0; dest[a] != '\0'; a++ )
	{
		counter++;
	}
	for (b = 0; src [b] != '\0'; b++)
	{
		dest[counter + b] = src [b];
	}
	dest[counter + b] = '\0';
	return (dest);
}
