#include "main.h"

/**
 * puts_half - check the code
 *@str : oui
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int max, divmax;

	for (max = 0; str[max] != '\0'; max++)
	{
		continue;
	}
	if (max % 2 != 0)
	{
		divmax = (max + 1) / 2;
	}
	else
	{
		divmax = max / 2;
	}
	while (str[divmax] != '\0')
	{
		_putchar(str[divmax]);
		divmax++;
	}
	_putchar('\n');
}
