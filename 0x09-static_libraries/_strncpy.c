#include "main.h"

/**
 * _strncpy - This function copies a pointer to a char
 * @dest: the destination string to copy into
 * @src: what is to be copy
 * @n: the nbyte to copy from src
 *
 * Return: This returns a pointer to a char type
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && *(src + i) != 0; i++)
		*(dest + i) = *(src + i);
	while (i < n)
	{
		*(dest + i) = 0;
		i++;
	}
	return (dest);
}
