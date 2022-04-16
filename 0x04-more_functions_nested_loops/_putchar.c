#include <unistd.h>

/**
 * _putchar - write a character to the stdout
 * @c: character t9 display
 *
 * Return: sucess 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
