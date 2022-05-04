#include <stdio.h>

/**
 * main - The entry point of the program
 * @argc: the argument count
 * @argv: the pointer to an array of string
 *
 * Return: always 0 for success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);

	return (0);
}
