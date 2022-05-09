#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: a paramter of unsigned int, that gives the number of
 * memory to allocate using malloc function
 *
 * Return: returns a pointer to the allocated memory
 * and malloc allocation fails it should exit mnormally
 * with status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s != NULL)
	{
		return (s);
	}
	else
	{
		exit(98);
	}

}
