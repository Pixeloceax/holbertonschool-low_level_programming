#include "main.h"

/**
 *read_textfile - function
 *@filename: filename
 *@letters: letters1
 *Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY);
	char *c;
	ssize_t size;

	if (fd == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		return (0);
	}

	size = read(fd, c, letters);
	write(c, size);
	close(fd);
	return (size);
}
