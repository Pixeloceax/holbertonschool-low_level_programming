#include "main.h"

int _strlen(char *s);
void rev_string(char *s);

/**
 * rev_string - reverse srting
 * @s: int
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len, temp;
	int left = 0;

	for (len = _strlen(s) - 1; len > left; left++, len--)
	{
		temp = s[left];
		s[left] = s[len];
		s[len] = temp;
	}
}

/**
 * _strlen - stringh lengh
 * @s: int
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
