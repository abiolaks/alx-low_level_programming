#include "main.h"

/**
 * _strlen - get the length of a string
 * @str: a pointer to char
 *
 * Return: it return an integer which is the count of the string
 * length.
 */

int _strlen(char *str)
{
	char *s = str;/* hold the start address of the pointer to char */

	while (*str)/* while the values are i.e not equal*/
		str++;/* increment address i.e 1 byte increase per iter*/

	return (str - s);/* get length( start address - the current addr*/
}

/**
 * _strncat - This function concatenate two strings use n bytes
 * @dest: The destination string
 * @src: The string to remove n byte to concatenate to dest
 * @n: the number of byte to append
 *
 * Return: it return a string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	j = _strlen(dest);

	for (i = 0; *(src + i) != 0 && i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
