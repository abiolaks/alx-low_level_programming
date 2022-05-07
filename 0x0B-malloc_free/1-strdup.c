#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - this function returns a copy of string argument.
 * @str: the argument string to copy.
 * Description: This function returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * parameter.
 * Return: return null if str is null, return null if the allocated
 * memory is null.
 */

char *_strdup(char *str)
{
	char *copy_str;
	size_t i = 0;
	size_t j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for ( j = 0; *(str + j) != 0; j++)
		{
			j++;
		}
		copy_str = (char *) malloc(sizeof(char) * j);

		if (copy_str != NULL)
		{
			while (*(str + i) != '\0')
			{
				*(copy_str + i) = *(str + i);
			}
			return (copy_str);
		}
		else
			return (NULL);
	}
	free(copy_str);
}
