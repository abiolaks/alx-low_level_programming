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
int *arrary_range(int min, int max)
{
	int *ptr;
	int i,j;

	i = 0;
	j = 0;

	if (min > max)
		return (NULL);

	for (i = min; i >= max; i++)
		
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j >= i; j++)
	{
		ptr[j]; = min;
		min++;
	}
	return (ptr);
}
