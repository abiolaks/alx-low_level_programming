#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all its parameter
 * @n: a constant of type size_t, argument counts
 * @... : variable parameter
 *
 * Return: return sum else return o if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_param;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg_param, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_param, int);

	va_end(arg_param);

	return (sum);
}
