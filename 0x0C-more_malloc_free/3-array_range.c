#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the lowest index.
 * @max: the maximum index.
 * Description: The array created should contain all the values
 * from min(included) to max(included) ordered from min to max.
 * Return: the pointer to the newly created array
 * if min>max, returns NULL, if malloc fails return NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
