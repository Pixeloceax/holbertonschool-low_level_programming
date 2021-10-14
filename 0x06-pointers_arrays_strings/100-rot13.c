#include "main.h"

/**
 * rot13- check the code
 * @s : moi
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int a, b;
	char norot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == norot[b])
			{
				s[a] = rot[b];
				break;
			}
		}
		b = 0;
	}
	return (s);
}
