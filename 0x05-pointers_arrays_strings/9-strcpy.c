#include "main.h"

/**
 * _strcpy - copie string
 * @dest: char
 * @src: char
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}
