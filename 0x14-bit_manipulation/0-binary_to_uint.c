#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a constant to a char pointer
 *
 * Return: returns the converted number, or 0 if there is
 * one of more chars in the string b that is not 0 or 1, and
 * when b is null.
 */
unsigned int binary_to_uint(const char *b)
{
	int a[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	size_t _uint = 0;
	size_t i = 0;
	size_t k = 0;
	size_t n = 0;
	size_t count = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		count++;
		i++;
	}
	while (count--)
	{
		n = b[count] - '0';
		_uint = _uint + (n * a[k]);
		k++;
	}
	return (_uint);

}
