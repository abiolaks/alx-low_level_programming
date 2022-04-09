#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always success
 *
 * putchar - print character
 *
 * Description: write a program that prints all possible
 * combinations of single digit number.
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
