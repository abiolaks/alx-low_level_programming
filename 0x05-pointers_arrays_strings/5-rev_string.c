#include "main.h"

/**
 * rev_string - This function reverse a string
 * @s: the pointer to string
 */

void rev_string(char *s)
{
	int t, i;
	char c;

	t = 0;
	while (*(s + t) != '\0')
	{
		t++;
	}
	t--;

	for (i = 0; i < t; i++)
	{
		c = *(s + t);
		*(s + t) = *(s + i);
		*(s + i) = c;
		t--;
	}
}
