#include "main.h"
/**
 * _abs - computes the abosolute value of an integer.
 * Return: returns an int
 * @i: the integer value entered
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
	{
		int abs = i * -1;

		return (abs);
	}
	_putchar('\n');
}
