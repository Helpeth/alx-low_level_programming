#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file, wd, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wd = write(file, text_content, len);

	if (file == -1 || wd == -1)
		return (-1);

	close(file);

	return (1);
}
