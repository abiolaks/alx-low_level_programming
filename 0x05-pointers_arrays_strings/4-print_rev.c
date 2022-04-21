#include "main.h"

/**
 * print_rev - This function print a string in reverse
 *
 * @s : pointer to string
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
