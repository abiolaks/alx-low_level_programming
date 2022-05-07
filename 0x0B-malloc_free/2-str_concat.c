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
	size_t len1 = 0, len2 = 0;
	char *dest, *ret;

	dest = s1;
	if (s1)
		while (*dest++)
			len1++;
	else
		s1 = "";

	dest = s2;
	if (s2)
		while (*dest++)
			len2++;
	else
		s2 = "";

	ret = malloc(len1 + len2 + 1);
	if (!ret)
		return (NULL);

	dest = ret;
	while (*s1)
		*dest++ = *s1++;
	while (*s2)
		*dest++ = *s2++;
	*dest = 0;

	return (dest);
}
