#include "main.h"
/**
 * times_table - this function does not return anything
 * but just display the times table till 9.
 * _putchar: display character to the stdout using system
 * calls.
 */
void times_table(void)
{
	int n;
	int i;

	n = 10;

	for (i = 0; i < n; i++)
	{
		int j;
		int times;

		for (j = 0; j < n; j++)
		{
			times = i * j;
			if(j == 9 && times >= 10)
			{
				_putchar(times / 10 + '0');
                _putchar(times % 10 + '0');
				break;
			}
			else if (j == 9 && times <= 10)
			{
				 _putchar(times + '0');
				 break;
			}
			if (times >= 10)
			{
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
				_putchar(44);
				_putchar(9);
			}
			else if (times < 10)
			{
				_putchar(times + '0');
				_putchar(44);
				_putchar(9);
			}
		}
		_putchar(10);
	}
}
