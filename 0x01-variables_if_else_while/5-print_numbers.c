#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (succe)
 *
 * printf - display to the foramtted ouput to stdio
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);

}
