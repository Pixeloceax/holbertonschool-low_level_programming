#include "main.h"

int main(char *argv[], int argc)
{
	int copy, read, write, end_copy;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, " Usage: ");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, " Error ");
		exit(99);
	}
	copy = open;
	read = open;
	end_copy = open;
	
}