#include "main.h"

/**
 * _strlen - returns the length of string
 * @str: string pass to function
 * Description: _strlen return counts of char string
 * Return: count of the string is return an int.
 */
int _strlen(char *str)
{
	int size = 0;
	int i = 0;

	for (i = 0; *(str + i) != 0; i++)
	{
		size++;
	}
	return (size);

}

/**
 * _strcat - append two pointers of char type.
 * @dest: destination pointer
 * @src: the char strng to append
 *
 * Return: new dest with src appended : a pointer of
 * char type
 */
char *_strcat(char *dest, char *src)
{
	/*
	 * get the length of dest excluding the null byte
	 * and point to the last char byte (address in memory)
	 */

	int i = 0;

	int n = _strlen(dest);

	dest = dest + n;

	/* iterate through src and append each to dest */
	for (i = 0; *(src + i) != '\0'; i++)
	{
		/*
		 * append to src to starting from the last address of dest
		 * which is str.
		 */
		*dest++ = *src++;
	}
	/* add null byte at the end of str(the new dest)*/
	*dest[n + i] = '\0';
	return (dest);
}
