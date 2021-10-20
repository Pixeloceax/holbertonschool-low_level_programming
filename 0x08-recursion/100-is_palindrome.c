#include "main.h"
/**
 * _strlen_recursion - check the code
 *@s : s
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome_recursive - check the code
 *@s : s
 * @i : i
 * @j : j
 * Return: Always 0.
 */

int is_palindrome_recursive(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (i == j - 1)
	{
		return (s[i] == s[j]);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, i + 1, j - 1));
}

/**
 * is_palindrome - check the code
 *@s : s
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int A;

	A = _strlen_recursion(s);
	if (A == 0 || *s != s[A - 1])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, 0, A - 1));
}
