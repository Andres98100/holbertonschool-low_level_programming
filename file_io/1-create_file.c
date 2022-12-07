#include "main.h"

/**
 * create_file - function create a file
 * @filename: variable char
 * @text_content: bariable char
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int lentext = 0;

	if (text_content)
		lentext = strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, lentext);
	close(fd);
	return (1);
}
