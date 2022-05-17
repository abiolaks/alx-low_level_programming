#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of all its parameter
 * @n: a constant of type size_t, argument counts
 * @... : variable parameter
 *
 * Return: return sum else return o if n == 0
 */
int sum_them_all(const size_t n, ...)
{
	va_list ap;

	va_start(ap, n);

	size_t i = 0;

	if (n == 0)
		return (0)

	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
