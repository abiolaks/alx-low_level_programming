#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0(succes)
 *
 * putchar - int putchar(int c), It print a character to stdout.
 */

int main(void)
{
	int c;

	for (c = 97; c <= 122; ++c)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
