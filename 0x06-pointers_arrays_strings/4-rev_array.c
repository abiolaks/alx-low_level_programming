#include "main.h"

/**
 * reverse_array - This function reverse the content of an array
 * @a: pointer to a char tyep
 * @n: integer
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int t = 0;

	j = n - 1;

	while (i < n / 2)
	{
		t = *(a + i);
		*(a + i) = *(a + j);
		a[j--] = t;

		i++;
	}
}
