#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check the code
 *@str : str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	{
	char *strdup;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	strdup = malloc(sizeof(*str) * a);
	if (strdup == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		strdup[b] = str[b];
		b++;
	}
	return (strdup);
}
}
