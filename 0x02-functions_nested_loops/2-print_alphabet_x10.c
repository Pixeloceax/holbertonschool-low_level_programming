#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet X 10
 */

void print_alphabet_x10(void)
{
	int P = 0;
	int X = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (X != 10)
	{
		while (P != 26)
		{
			_putchar(str[P]);
			P++;
		}
		P = 0;
		X++;
		_putchar('\n');
	}
}
