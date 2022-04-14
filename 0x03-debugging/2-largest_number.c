#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
		printf("%d a is the largest", largest); 
	}
	else if (b > a && b > c)
	{
		largest = b;
		printf("%d b is the largest", largest);
	}
	else
	{
		largest = c;
		printf("%d c is the largest", largest);
	}

	return (largest);
}
