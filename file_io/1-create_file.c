#include "main.h"

/**
 * create_file - function create a file
 * @filename: variable char
 * @text_content: bariable char
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
  char *buff;
	int fd;

	if (!filename)
		return (-1);
	buff = malloc(sizeof(char));
	if (!buff)
		return (0);
	if (text_content)
	{
		fd = open("hello wold.txt", O_CREAT | O_RDWR, 0600);
		if (fd == -1)
			return (0);
		write(fd, buff, 1024);
	}

	close(fd);
	return (1);
}