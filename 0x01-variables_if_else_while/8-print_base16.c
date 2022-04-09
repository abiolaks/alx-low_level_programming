#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway sucess
 *
 * putchar - for char
 *
 * Description: A program to prints all the number of base 16
 * in lowercase
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
		/*print the number in the hex*/
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		/*print the letter in the hex*/
		putchar(c);
	putchar('\n');
	return (0);
}
