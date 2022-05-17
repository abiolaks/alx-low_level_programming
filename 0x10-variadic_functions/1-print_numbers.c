#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints number, followed linefeed
 * @separator: to demacate the digit
 * @n: argcount
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	size_t i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator)
			if (i < n -1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
