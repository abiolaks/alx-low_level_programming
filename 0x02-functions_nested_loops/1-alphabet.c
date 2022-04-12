#include "main.h"
/**
 * print_alphabet - disiplay characters in lower case
 * main - entry point of the program
 * Return: always return succes for 0
 */
void print_alphabet(void)
	/* This print letters in lower case */
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
