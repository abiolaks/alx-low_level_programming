#include "main.h"

/**
 * puts2 - This function prints every even character in a string
 * @str: This is a pointer to a char variable.
 */

void puts2(char *str)
{
	char *t;/* to hold the first address of str for iteration*/
	int i;
	int size = 0;

	for (t = str; *t != 0; t += 1)
	{
		size++;
	}
	for (i = 0; i < size; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
