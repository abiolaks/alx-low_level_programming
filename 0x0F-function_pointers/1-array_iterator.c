#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - This function executes a given as a parameter
 * on each element of an array.
 * @array: a pointer to an array
 * @size: size of the array
 * @action: a pointer to a function.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
