#include "main.h"

/**
 * cap_string - check the code
 *@s : mdqfj
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int a, b;
	char c[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	a = 1;
	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	while (s[a] != '\0')
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (s[a - 1] == c[b] && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] = s[a] - 32;
			}
		}
		a++;
	}
	return (s);
}
