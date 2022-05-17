#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_ptrings - prints ptrings.
 * @separator: ptring to be printed between the ptrings.
 * @n: number of ptrings passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_param;
	unsigned int i;
	char *ptr;

	va_start(arg_param, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(arg_param, char *);

		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(arg_param);
}
