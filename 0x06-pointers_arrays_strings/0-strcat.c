#include "main.h"

/**
 * _strcat - This is a function appends the src string to the dest
 * string, overwriting the terminating null byte at the end
 * of dest, then adds a terminating null byte
 * @dest, @src: takes two argument 
 *
 * Return: it returns a pointer to the resulting string dest.
 */

/* function definiton */

/* define a function to return the count length of string of dest
 * excluding the null byte
 */
int _strlen(char *str)
{
	int size = 0;
	int i = 0;

	for (i = 0; *(str + i) != 0; i++)
	{
		size++;
	}
	return size;

}
char *_strcat(char *dest, char *src)
{
	/*
	 * get the length of dest excluding the null byte
	 * and point to the last char byte (address in memory)
	 */
	int i = 0;
	dest = dest + _strlen(dest);

	/* iterate through src and append each to dest */
	for (i = 0; *(src + i) != '\0'; i++)
	{
		/*
		 * append to src to starting from the last address of dest
		 * which is str.
		 */
		dest[i] = src[i];
	}
	/* add null byte at the end of str(the new dest)*/
	*dest = '\0';
	return dest;
}
