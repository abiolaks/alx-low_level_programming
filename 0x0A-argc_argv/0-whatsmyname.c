#include <stdio.h>
#include "main.h"

/**
 * main - the entry point of the program
 * @argc: argument count
 * @argv: pointer to an array of string
 * Description: This program explains the concept of argument
 * to the main function.
 * it print the program name
 * Return: always 0 which means successful.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
