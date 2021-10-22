#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code
*@argc : argc
*@argv : argv
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int a, b, c;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; b < argv[a][b]; b++)
		{
			if (argv[a][b] < 49 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}
