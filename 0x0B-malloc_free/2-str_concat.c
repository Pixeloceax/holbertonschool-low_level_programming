#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 *@s1 : first str best
 *@s2 : second str school
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a] = s2[b];
		b++, a++;
	}
	str[a] = '\0';
	return (str);
}
