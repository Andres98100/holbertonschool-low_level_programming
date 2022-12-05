#include "main.h"

/**
 * read_textfile - function read a file
 * @filename: variable char
 * @letters: variable size_t
 * Return: size_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, read_file, write_file;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);
	read_file = read(fd, buff, letters);
	if (read_file == -1)
		return (0);
	buff[letters] = '\0';
	write_file = write(STDOUT_FILENO, buff, read_file);
	if (write_file == -1)
		return (0);
	free(buff);
	close(fd);
	return (write_file);
}
