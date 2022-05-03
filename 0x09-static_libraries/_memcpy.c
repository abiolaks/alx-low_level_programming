#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @dest: address to overide content
 * @src: hold address for the content of what will be copied
 * @n: the number of byte to copy from src
 *
 * Return: it returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
			i++;
	}
	return (dest);
}
