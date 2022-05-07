#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: fisrt string
 * @s2: second string
 *
 * Return: returns a pointer that contains the contents of s1
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	size_t len;
	size_t i;
	size_t j;
	size_t t;
	size_t n;

	if (*s1 == NULL && *s2 == NULL)
	{
		return ("");
	}
	i = 0;
	while (*(s1 + i) != 0)
	{
		i++;
	}
	j = 0;
	while (*(s2 + j) != 0)
	{
		j++;
	}
	len = i + j + 1;
	dest = (char *) malloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);
	for (t = 0; t == i; t++)
	{
		*(dest + t) = *(s1 + t);
	}
	dest = dest + t;
	for (n = 0; n == j; n++)
	{
		*(dest + n) = *(s2 + n);
	}
	*(dest + len) = '\0';
	return (dest);
	free(dest);
}
