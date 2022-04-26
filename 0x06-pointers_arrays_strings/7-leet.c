#include "main.h"

/**
 * leet - This function encode a string to 1337
 * @c: argument to be encrypted
 *
 * Return: It return a pointer to a char
 */

char *leet(char *c)
{
	int i = 0;
	int j = 0;

	char *x = "aAeEoOtTIL";
	char *y = "4433007711";

	for (i = 0; *(c + i) != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(c + i) == *(x + j))
			{
				*(c + i) = *(y + j);
			}
		}
	}
	return (c);
}
