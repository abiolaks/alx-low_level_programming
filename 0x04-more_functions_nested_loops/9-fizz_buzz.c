#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always sucesss for 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');

		}
		else
		{
			printf("%d ", n);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
