#include "main.h"

/**
 * append_text_to_file - function creates file
 * @filename: for to read
 * @text_content: text to be written to file
 * Return: 1 or -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t;
	int s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (0);
	}

	close(fd);
	return (1);
}
