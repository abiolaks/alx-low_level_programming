#include "stdlib.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array element
 * @size: size of the array element
 *
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		*(ptr + i) = 0;
	return (ptr);
}
