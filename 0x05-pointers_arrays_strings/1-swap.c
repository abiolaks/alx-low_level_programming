#include "main.h"
/**
 * swap_int - this swaps the values of two integer
 * @a: first integer
 * @b: second integer
 *
 * Description: This program manipulate memory address of two
 * integer values by swapping the memory address.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
