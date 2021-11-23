#include "main.h"
#include <stdio.h>

/**
 *copy - function
 *@src: src
 *@dest: dest
 */

void copy(const char *src, const char *dest)
{
	int fd, fd2, _read;
	char buff[1024];

	fd = open(src, O_RDONLY);
	if (!src || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((_read = read(fd, buff, 1024)) > 0)
	{
		if (write(fd2, buff, _read) != _read || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 *main - function
 *@argc: argc
 *@argv: argv
 *Return: int
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(argv[1], argv[2]);
	exit(0);
}
