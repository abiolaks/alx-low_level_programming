#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		sum = 0;
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{

				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);

	return (0);
}
