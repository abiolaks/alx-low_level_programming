#include <stdio.h>
/**
 * print_to_98 - this function prints all natural numbers
 * from n to 98
 * @n: get the number to test
 */
void print_to_98(int n)
{
	int i;

	i = 0;
	do {
		printf("%d, ", i);
		i++;
	} while (i <= n);
	putchar('\n');

}
