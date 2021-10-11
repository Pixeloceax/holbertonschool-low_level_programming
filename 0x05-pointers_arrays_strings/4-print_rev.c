#include "main.h"

int _strlen(char *s);
void print_rev(char *s);

/**
 * print_rev - reverse print
 * @s: int
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len;

	for (len = _strlen(s) - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
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
