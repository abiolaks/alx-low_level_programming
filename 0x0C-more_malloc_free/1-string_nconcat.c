#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: number of byte to copy
 *
 * Return: return pointer to char
 */
char *string_nconcat(char *s1, char *s2, size_t n)
{
	char *ptr;
	size_t i = 0, j = 0, k = 0, z = 0;

	if (s1 == NULL && s2 == NULL)
		return (" ");
	while (*s1++)
		i++;
	while (*s2++)
		j++;
	if (n >= j)
	{
		n = j;
		ptr = malloc(sizeof(char) * (i + n + 1));
	}
	if (n < j)
		ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (z < n)
	{
		ptr[i + z] = s2[z];
		i++;
		z++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
