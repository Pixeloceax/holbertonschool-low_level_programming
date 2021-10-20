#include "main.h"

int _strlen_recursion(char *s);
int wildcmp(char *s1, char *s2);
int _wildcmp_recursion(int i, int j, char *s1, char *s2);
int search_char(int i, int j, char *s1, char *s2);

/**
 * wildcmp - compares two strings
 * (the special char * can replace any string )
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 1 if it's same, 0 else
 */
int wildcmp(char *s1, char *s2)
{
	int i, j;

	i = _strlen_recursion(s1) - 1;
	j = _strlen_recursion(s2) - 1;
	return (_wildcmp_recursion(i, j, s1, s2));
}

/**
 * _strlen_recursion - Determine the length of the string
 *
 * @s: String
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _wildcmp_recursion - Compare 2 string using recursion
 *
 * @i: length of s1
 * @j: length of s2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if it's same, 0 else
 */
int _wildcmp_recursion(int i, int j, char *s1, char *s2)
{
	if (i < 0 || j < 0)
		return (1);
	else if ((*(s2 + j) == '*') && j == 0)
		return (1);
	else if (*(s2 + j) == '*')
	{
		i = search_char(i, j - 1, s1, s2);
		if (!(i < 0))
			return (_wildcmp_recursion(i, j - 1, s1, s2));
		else
			return (0);
	}
	else if (*(s1 + i) == *(s2 + j))
		return (_wildcmp_recursion(i - 1, j - 1, s1, s2));
	else
		return (0);
}

/**
 * search_char - Search a particular char into s1
 *
 * @i: index of a char in s1
 * @j: index of a char in s2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if found, -1 if not, i if s2[j] == '*'
 */
int search_char(int i, int j, char *s1, char *s2)
{
	if (i < 0)
	{
		return (-1);
	}
	if (*(s2 + j) == '*')
	{
		return (i);
	}
	else if (*(s1 + i) != *(s2 + j))
	{
		return (search_char(i - 1, j, s1, s2));
	}
	else
	{
		return (i);
	}
}
