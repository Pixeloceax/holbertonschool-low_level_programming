#include "main.h"

/**
 *read_textfile - function
 *@filename: filename
 *@letters: letters
 *Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	char c;

	if (fp == NULL)
	{
		return (0);
	}

	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
		letters++;
	}
	return (letters);
	fclose(fp);

	return (0);
}
