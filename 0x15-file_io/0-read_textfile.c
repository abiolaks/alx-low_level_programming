#include "main.h"

/**
 * read_textfile - reads a text file and print it to posix std op
 * @filename: path where the file is.
 * @letters: characters to read and print
 * Description: if filename is NULL return 0, if file can
 * not be opened or read, return 0, if write fails or does not
 * write the expected amount of bytes return 0.
 * Return: actual numbers of leters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, fr, fo;


	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	fr = read(fd, buf, letters);
	fo = write(STDOUT_FILENO, buf, fr);
	close(fd);

	free(buf);

	return (fo);

}
