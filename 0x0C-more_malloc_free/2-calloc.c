#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array element
 * @size: size of the array element
 *
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(size_t nmemb, size_t size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
