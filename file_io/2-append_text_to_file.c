#include "main.h"

/**
 * append_text_to_file - function add text at end
 * @filename: variable char
 * @text_content: variable char
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int lentxt = 0;

	if (text_content)
		lentxt = strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, lentxt);
	close(fd);
	return (1);
}
