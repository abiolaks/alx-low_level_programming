#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 * rand - generate pseudo-random numbers
 *
 * srand - seed for reproducibility of code a time
 */
int main(void)
{
	int n;
	int las_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	las_num = n % 10;

	printf("Last digit of %d is %d ", n, las_num);

	if (las_num > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (las_num == 0)
	{
		printf("and is 0\n");
	}
	else if (las_num < 6 && las_num != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
