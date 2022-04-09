#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (success)
 *
 * putchar - print a character, putchar(int c)
 */
int main(void)
{
	char c;

	for (c = 0x61; c <= 0x7A; ++c)
	{
		if (c == 0x65)
			continue;
		if (c == 0x71)
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
