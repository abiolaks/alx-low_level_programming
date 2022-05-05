#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: pointer to an int
 *
 * Return: always sucess for zero and return 1 for error.
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int result = 0;
	int i = 1;

	if (argc == 3)
	{
		while (1)
		{
			a = atoi(argv[i]);
			i++;
			b = atoi(argv[i]);
			break;
		}
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
