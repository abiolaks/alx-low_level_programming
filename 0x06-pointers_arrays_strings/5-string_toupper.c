#include "main.h"

/**
 * string_toupper - this capiliaxe wordes
 * @c: the argument to capitatlize
 *
 * Return: this return a pointer to char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; *(c + i) != 0; i++)
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			*(c + i) = *(c + i) - 32;
	}
	return (c);
}
