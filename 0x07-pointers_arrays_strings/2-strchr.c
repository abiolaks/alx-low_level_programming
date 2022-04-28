#include "main.h"
#include <stddef.h>

/**
 * _strchr - This functions locates a character in a string
 * @s: the string to search
 * @c: the character byte to search for in s
 *
 * Return: it returns a pointer to the first occurence of
 * character c in the string s, or null
 * if none is found.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
