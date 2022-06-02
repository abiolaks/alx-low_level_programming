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
	size_t i = 0;
	int fw;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (*(text_content + i) != 0)
		i++;
	fw = write(fd, text_content, i);
	if (fw == -1)
		return (-1);

	close(fd);

	return (1);

}
