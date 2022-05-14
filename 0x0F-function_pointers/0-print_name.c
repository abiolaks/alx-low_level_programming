#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: a pointer to char
 * @f: a pointer to a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/*
	 * checking the pass pointer that is not null
	 * name and f
	 */

	if (name != NULL || f != NULL)
		f(name);
}
