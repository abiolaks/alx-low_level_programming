#include <unistd.h>

/**
 * _putchar - print a char
 * @s: a char
 *
 * Return: return a char
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
