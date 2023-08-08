#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads text file and prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, wd, td;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	td = read(fd, buffer, letters);
	wd = write(STDOUT_FILENO, buffer, td);

	close(fd);
	free(buffer);
	return (wd);
}
