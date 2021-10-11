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
	int c, answer;

	srand(time(NULL));
	for (c = 2772; c > '~';)
	{
		answer = (rand() % '~');
		printf("%c", answer);
		c = c - answer;
	}
	printf("%c", c);
	return (0);
}
