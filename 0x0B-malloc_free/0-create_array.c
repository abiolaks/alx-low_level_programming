#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char.
 * @size: to allocate enough memory, the number of char instance
 * @c: the char to initialize the created array with.
 *
 * Return: returns null if size is 0, returns a pointer to the
 * array or null if it fails.
 */

char *create_array(unsigned int size, char c)
{
	/*
	 * check wether the size is not zero
	 * then allocate memory using malloc
	 * check wether memory has been allocated
	 * loop through array indexs and populate with char c
	 */

	char *array_char;
	size_t i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array_char = (char *) malloc(sizeof(char) * size);
		if (array_char != NULL)
		{
			while (i < size)
			{
				*(array_char + i) = c;
				i++;
			}
			return (array_char);
		}
		else
			return (NULL);
	}
	free(array_char);
}
