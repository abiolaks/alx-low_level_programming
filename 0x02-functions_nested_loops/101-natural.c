#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always success (0);
 *
 * Description: Compute adn prints the sum of all
 * the multiples of 3 or 5 below 1024.
 */
int main(void)
{
	unsigned long int sum3;
	unsigned long int sum5;
	unsigned long int sum;
	int i;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
