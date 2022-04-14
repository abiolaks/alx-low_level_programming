#include "main.h"
/**
 * times_table - this function does not return anything
 * but just display the times table till 9.
 * _putchar: display character to the stdout using system
 * calls.
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; i++)
		{
			int times;

			times = i * j;

			if (j == 9)
			{
				_putchar(times);
				break;
			}
			else
			{
				_putchar(times + ',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
