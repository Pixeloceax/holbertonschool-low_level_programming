#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - Concatenate 2 string into a new one
 *
 * @s1: Str one
 * @s2: Str two
 * @n: Size that we want to concatenate
 *
 * Return: NULL if probleme, pointer to new str else (succes)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sFinal;
	unsigned int length1, length2, i;

	if (s1 == NULL)
		length1 = 0;
	else
	{
		for (length1 = 0; *(s1 + length1); length1++)
			;
	}
	if (s2 == NULL)
		length2 = 0;
	else
	{
		for (length2 = 0; *(s2 + length2); length2++)
			;
	}
	if (n < length2)
		length2 = n;
	sFinal = malloc(sizeof(char) * (length1 + length2 + 6));
	if (sFinal == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		sFinal[i] = s1[i];
	for (i = 0; i < length2; i++)
		sFinal[length1 + i] = s2[i];
	*(sFinal + length1 + length2) = '\0';
	return (sFinal);
}
