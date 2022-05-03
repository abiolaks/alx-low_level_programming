#include "main.h"

/**
 * _memset - This functions fills the memory with a constant byte
 * @s: Takes a pointer - the memory address to fills
 * @b: the constant char byte to fill into the pointer
 * @n: addresses to fills in memory.
 *
 * Return: it returns a pointer to the memory area of the pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
