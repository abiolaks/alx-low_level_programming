#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 *
 * putchar - print a character
 */

int main(void)
{
	char c;

	for (c = 0141; c <= 0172; ++c)
	{
		putchar(c);
	}
	for (c = 0101; c <= 0132; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
