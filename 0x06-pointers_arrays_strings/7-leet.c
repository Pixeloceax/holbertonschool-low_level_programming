#include "main.h"

/**
 * leet - check the code for
 *@s : lkj
 * Return: Always 0.
 */
char *leet(char *s)
{
	int a, b;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char number[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; lower[b] && upper[b] != '\0'; b++)
		{
			if (s[a] == lower[b] || s[a] == upper[b])
			{
				s[a] = number[b];
			}
		}
	}
	return (s);
}
