#include "main.h"

/**
 *append_text_to_file - function
 *@filename: filename
 *@text_content: text_content
 *Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{

	ssize_t fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t c;
	int size = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[size])
		{
			size++;
		}
		c = write(fd, text_content, size);
	}

	if (fd == -1 || c == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
