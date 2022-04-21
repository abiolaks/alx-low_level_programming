#include "main.h"

/**
 * print_rev - This function print a string in reverse
 *
 * @s : pointer to string
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;
	l--;
	for (; l >= 0; l--)
	{
		_putchar(*(s + l));
	}
	_putchar('\n');
}
