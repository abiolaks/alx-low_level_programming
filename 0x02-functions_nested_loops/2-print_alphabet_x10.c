#include "main.h"
/**
 * print_alphabet_x10 - print small case letters 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int c;

		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
