#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 *
 * putchar - display single char or digit
 */
int main(void)
{
	char i;

	for (i = 0; i < 10; ++i)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
