#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a fil
 * @filename: name of file path
 * @text_content: content to write to file
 *
 * Return: return success, and creat file with content appended
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, fw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + i) != 0)
			i++;
		fw = write(fd, text_content, i);

		if (fw == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
