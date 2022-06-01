#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file path
 * @text_content: string to write
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		fd = creat(filename, 0600);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	return (fd);

	close(fd);

}
