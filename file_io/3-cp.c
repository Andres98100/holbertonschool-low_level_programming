#include "main.h"

/**
 * check_error - function check errors
 * @stderr: variable int
 * @filename: variable char
 * @fd: variable int
 * Return: void
*/

void check_error(int stderr, char *filename, int fd)
{
	if (stderr == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(stderr);
	}
	else if (stderr == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(stderr);
	}
	else if (stderr == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(stderr);
	}
	else if (stderr == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(stderr);
	}
}

/**
 * main - program that copies the content of a file to another file.
 *@argc: variable int
 *@argv: matriz char
 *Return: int
 */

int main(int argc, char **argv)
{
	int fd = 0, fd_to = 0, close_status = 0, i;
	ssize_t bytes = 1, bytes_write = 1;
	char *file_from = NULL, *file_to = NULL, buff[1024];

	if (argc != 3)
	{
		check_error(97, argv[2], 0);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		check_error(98, file_from, 0);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		check_error(99, file_to, 0);
	for (i = 0; i < 1024; i++)
		buff[i] = '\0';
	while (bytes)
	{
		bytes = read(fd, buff, 1024);
		if (bytes == -1)
			check_error(98, file_from, 0);
		bytes_write = write(fd_to, buff, bytes);
		if (bytes_write == -1)
			check_error(99, file_to, 0);
	}
	close_status = close(fd);
	if (close_status == -1)
		check_error(100, NULL, fd);
	close_status = close(fd_to);
	if (close_status == -1)
		check_error(100, NULL, fd_to);
	return (0);
}
