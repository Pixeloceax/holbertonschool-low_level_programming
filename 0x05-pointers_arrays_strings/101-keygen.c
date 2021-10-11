#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main
 *
 * Return: 0 (succes)
 */

int main(void)
{
	int a, answer;

	srand(time(NULL));
	for (a = 2772; a > '~';)
	{
		answer = (rand() % '~');
		printf("%c", answer);
		a = a - answer;
	}
	printf("%c", a);
	return (0);
}
