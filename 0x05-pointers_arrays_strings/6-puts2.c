#include "main.h"

/**
 * puts2 - This function prints every even character in a string
 * @str: This is a pointer to a char variable.
 */

void puts2(char *str)
{
	char *t;/* to hold the first address of str for iteration*/

	for (t = str; *t != '\0'; t++)
	{
		if ((*t % 2 == 0))/* the value in t is check to be even*/
		{
			_putchar(*t);/*print the element of display*/
		}
	}
	_putchar('\n');
}
