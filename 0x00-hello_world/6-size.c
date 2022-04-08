#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * sizeof - to check the address in memory of various data type
 *
 * Description: This below script prints the size of various
 * on the computer it is compiled and run on.
 */
int main(void)
{
	char p;
	int i;
	long int li;
	long long int lli;
	float ft;

	printf("Size of a char: %ld byte(s)\n", sizeof(p));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(ft));

	return (0);
}
