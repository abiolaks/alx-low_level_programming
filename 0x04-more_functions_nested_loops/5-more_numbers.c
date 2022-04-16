#include "main.h"

/**
 * more_numbers - print 1 to 14 10 times
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');

			}
		}
		_putchar('\n');
	}
}
